#include "openmpalgorithm.h"
#include <omp.h>

const QImage& OpenMPAlgorithm::evaluate()
{
    #pragma omp parallel for
    for(int i = 0; i < frame_.width(); ++i)
    {
        for(int j = 0; j < frame_.height(); ++j)
        {
            frame_.setPixelColor(i, j, evaluateColorForPoint(i, j));
        }
    }

    return frame_;
}
