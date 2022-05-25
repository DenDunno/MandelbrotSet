#ifndef MANDELBROTSETFRAMERESULT_H
#define MANDELBROTSETFRAMERESULT_H

#include <qimage.h>


struct MandelbrotSetFrameResult
{
public:
    MandelbrotSetFrameResult(QImage& image, double time) : image_(image), time_(time)
    {}

    QImage& image() { return image_; }
    double& time() { return time_; }

private:
    QImage& image_;
    double time_;
};

#endif
