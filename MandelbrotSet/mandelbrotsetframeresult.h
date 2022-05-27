#ifndef MANDELBROTSETFRAMERESULT_H
#define MANDELBROTSETFRAMERESULT_H
#include <qimage.h>


class MandelbrotSetFrameResult
{
public:
    MandelbrotSetFrameResult(QImage& image, double time) : image_(image), time_(time)
    {}

    const QImage& image() { return image_; }
    const double& time() { return time_; }

private:
    const QImage& image_;
    const double time_;
};

#endif
