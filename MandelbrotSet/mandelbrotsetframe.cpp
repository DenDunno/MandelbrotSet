#include "mandelbrotsetframe.h"
#include <qimage.h>
#include <complex>

void run(QImage* image);
int evaluateIterationsForPoint(double x, double y, int maxIterations);

MandelbrotSetFrame::MandelbrotSetFrame(const MandelbrotSetFrameData &data)
    : data_(data), frame_(QImage(data.width(), data.height(), QImage::Format_ARGB32)), height_(width_ * data.height() / data.width())
{   
}


MandelbrotSetFrameResult MandelbrotSetFrame::evaluate()
{
    const clock_t start = clock();
    run(&frame_);
    const double elapsed_time = double( clock () - start ) /  CLOCKS_PER_SEC;

    return MandelbrotSetFrameResult(frame_, elapsed_time);
}


void MandelbrotSetFrame::run(QImage* image)
{
    for (int i = 0; i < image->height(); ++i)
        for (int j = 0; j < image->width(); ++j)
            image->setPixelColor(j, i, evaluateColorForPoint(j, i));
}

QColor MandelbrotSetFrame::evaluateColorForPoint(int x, int y)
{
    QColor result = QColor::fromRgb(0, 0, 0);

    double width = width_ / data_.zoom();
    double height = height_ / data_.zoom();

    double xStart = xStart_ + (width_ - width) / 2;
    double yStart = yStart_ + (height_ - height) / 2;

    double newX = xStart + (double)x / data_.width() * width + data_.location().x();
    double newY = yStart + (double)y / data_.height() * height + data_.location().y();

    int iterationsForPoint = evaluateIterationsForPoint(newX, newY, data_.iterations());

    if (iterationsForPoint != data_.iterations())
        result = colors_[iterationsForPoint % 16];

    return result;
}

int evaluateIterationsForPoint(double x, double y, int maxIterations)
{
    int iterations = 0;
    std::complex<double> z = 0;

    for (int i = 0; i < maxIterations; i++)
    {
        z = z * z +  std::complex<double>(x, y);

        if (std::abs(z) > 2)
            break;

        ++iterations;
    }

    return iterations;
}
