#include <omp.h>
#include "bitmap.h"
#include "cpualgorithm.h"
#include "mpialgorithm.h"
#include "openmpalgorithm.h"

int main()
{
    MandelbrotSetFrameData data = MandelbrotSetFrameData(Point(1920, 1080), Point(0.045, 0.2), 200, 2000);
    MandelbrotSetFrameAlgorithm* algorithm = new OpenMPAlgorithm(data);
    PixelMatrix pixelMatrix = algorithm->evaluate();    
    Bitmap bitmap = Bitmap(pixelMatrix);
    bitmap.save("D:/Business/MandelbrotSet/mandelbrotSetFrame.bmp");

    system("D:/Business/MandelbrotSet/mandelbrotSetFrame.bmp");

    return 0;
}
