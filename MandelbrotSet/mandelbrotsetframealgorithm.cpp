#include "mandelbrotsetframealgorithm.h"
#include <complex>

MandelbrotSetFrameAlgorithm::MandelbrotSetFrameAlgorithm(const MandelbrotSetFrameData& data)
    : frame_(QImage(data.width(), data.height(), QImage::Format_ARGB32)), data_(data), height_(width_ * data.height() / data.width())
{
}


QColor MandelbrotSetFrameAlgorithm::evaluateColorForPoint(int x, int y)
{
    QColor result = QColor::fromRgb(0, 0, 0);

    double width = width_ / data_.zoom();
    double height = height_ / data_.zoom();

    double xStart = xStart_ + (width_ - width) / 2;
    double yStart = yStart_ + (height_ - height) / 2;

    double newX = xStart + (double)x / data_.width() * width + data_.location().x();
    double newY = yStart + (double)y / data_.height() * height + data_.location().y();

    int iterationsForPoint = evaluateIterationsForPoint(newX, newY);

    if (iterationsForPoint != data_.iterations())
        result = colors_.at(iterationsForPoint % 16);

    return result;
}


int MandelbrotSetFrameAlgorithm::evaluateIterationsForPoint(double x, double y)
{
    int iterations = 0;
    std::complex<double> z = 0;

    for (int i = 0; i < data_.iterations(); i++)
    {
        z = z * z +  std::complex<double>(x, y);

        if (std::abs(z) > 2)
            break;

        ++iterations;
    }

    return iterations;
}
