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
    int world_size = 3;
    int world_rank = 0;

    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    std::cout << world_rank << std::endl;

    return frame_;
}
