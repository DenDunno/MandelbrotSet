#ifndef MANDELBROTSETFRAME_H
#define MANDELBROTSETFRAME_H
#include "mandelbrotsetframealgorithm.h"
#include "mandelbrotsetframeresult.h"


class MandelbrotSetFrame
{
public:
    MandelbrotSetFrame(const MandelbrotSetFrameAlgorithm &algorithm);

    MandelbrotSetFrameResult evaluate();

private:

    const MandelbrotSetFrameAlgorithm& _algorithm;
};

#endif
