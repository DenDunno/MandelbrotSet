#ifndef MPIALGORITHM_H
#define MPIALGORITHM_H
#include "mandelbrotsetframealgorithm.h"


class MPIAlgorithm : public MandelbrotSetFrameAlgorithm
{
public:

    MPIAlgorithm(const MandelbrotSetFrameData& data);
    ~MPIAlgorithm();
    const PixelMatrix& evaluate() override;
};

#endif
