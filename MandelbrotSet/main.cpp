#include <omp.h>
#include "bitmap.h"
#include "cpualgorithm.h"
#include "mpialgorithm.h"
#include "openmpalgorithm.h"

int main()
{
    MandelbrotSetFrameData data = MandelbrotSetFrameData(Point(1920, 1080), Point(0.045, 0.2), 200, 400);
    MandelbrotSetFrameAlgorithm* algorithm = new OpenMPAlgorithm(data);

    const clock_t begin_time = clock();
    PixelMatrix pixelMatrix = algorithm->evaluate();
    const float elapsed_time = float(clock() - begin_time) /  CLOCKS_PER_SEC;

    Bitmap bitmap = Bitmap(pixelMatrix);
    bitmap.save("D:/Business/MandelbrotSet/mandelbrotSetFrame.bmp");
    printf("Elapsed time = %f \n", elapsed_time);

    system ("D:/Business/MandelbrotSet/mandelbrotSetFrame.bmp");

    return 0;
}
