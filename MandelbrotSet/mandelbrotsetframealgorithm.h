#ifndef MANDELBROTSETFRAMEALGORITHM_H
#define MANDELBROTSETFRAMEALGORITHM_H
#include "mandelbrotsetframedata.h"
#include <QColor>
#include <QImage>
#include <map>


class MandelbrotSetFrameAlgorithm
{
public:
    MandelbrotSetFrameAlgorithm(const MandelbrotSetFrameData& data);
    virtual const QImage& evaluate() = 0;

protected:
    QColor evaluateColorForPoint(const int x, const int y);
    QImage frame_;

private:
    int evaluateIterationsForPoint(const double x, const double y);

    const MandelbrotSetFrameData& data_;
    const double xStart_ = -3.25;
    const double yStart_ = -1;
    const double width_ = 5;
    const double height_;
    const std::map<int, QColor> colors_ =
    {
        {0, QColor::fromRgb(66, 30, 15)},
        {1, QColor::fromRgb(25, 7, 26)},
        {2, QColor::fromRgb(9, 1, 47)},
        {3, QColor::fromRgb(4, 4, 73)},
        {4, QColor::fromRgb(0, 7, 100)},
        {5, QColor::fromRgb(12, 44, 138)},
        {6, QColor::fromRgb(24, 82, 177)},
        {7, QColor::fromRgb(57, 125, 209)},
        {8, QColor::fromRgb(134, 181, 229)},
        {9, QColor::fromRgb(211, 236, 248)},
        {10, QColor::fromRgb(241, 233, 191)},
        {11, QColor::fromRgb(248, 201, 95)},
        {12, QColor::fromRgb(255, 170, 0)},
        {13, QColor::fromRgb(204, 128, 0)},
        {14, QColor::fromRgb(153, 87, 0)},
        {15, QColor::fromRgb(106, 52, 3)},
    };
};

#endif
