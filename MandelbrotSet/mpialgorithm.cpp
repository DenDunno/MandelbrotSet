#include "mpialgorithm.h"
#include <mpi.h>
#include <iostream>

MPIAlgorithm::MPIAlgorithm(const MandelbrotSetFrameData& data) : MandelbrotSetFrameAlgorithm(data)
{
    MPI_Init(NULL, NULL);
}

MPIAlgorithm::~MPIAlgorithm()
{
    MPI_Finalize();
}

const PixelMatrix& MPIAlgorithm::evaluate()
{
    return frame_;
}
