#ifndef MANDELBROTSETFRAMEDATA_H
#define MANDELBROTSETFRAMEDATA_H
#include <QVector2D>
#include <qpoint.h>



class MandelbrotSetFrameData
{
public:
    MandelbrotSetFrameData(QPoint size, QVector2D location, int zoom, int iterations) :
        size_(size), location_(location), zoom_(zoom), iterations_(iterations) {}

    int width() const { return size_.x(); }
    int height() const { return size_.y(); }
    QVector2D location() const { return location_; }
    int zoom() const { return zoom_; }
    int iterations() const { return iterations_; }

private:

    const QPoint size_;
    const QVector2D location_;
    const int zoom_;
    const int iterations_;
};

#endif
