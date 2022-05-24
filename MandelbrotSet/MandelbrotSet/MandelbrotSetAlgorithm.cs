using System.Drawing;
using System.Numerics;

public class MandelbrotSetAlgorithm
{
    private readonly MandelbrotSetFrameData _data;
    private readonly MandelbrotSetColors _mandelbrotSetColors;
    private const double _xStart = -3f;
    private const double _yStart = -1.15f;
    private const double _width = 4.5f;
    private readonly double _height;
    
    public MandelbrotSetAlgorithm(MandelbrotSetFrameData data)
    {
        _data = data;
        _mandelbrotSetColors = new MandelbrotSetColors(_data.Iterations);
        _height = _width * (_data.Size.Y / _data.Size.X);
    }

    public Color EvaluatePoint(int x, int y)
    {
	    double width = _width / _data.Zoom;
	    double height = _height / _data.Zoom;
	    
	    double xStart = _xStart + (_width - width) / 2;
	    double yStart = _yStart + (_height - height) / 2;
	    
	    double newX = xStart + x / _data.Size.X * width + _data.Location.X;
        double newY = yStart + y / _data.Size.Y * height + _data.Location.Y;

        int iterationsForPoint = EvaluateIterationsForPoint(newX, newY);
        
        return _mandelbrotSetColors.GetColor(iterationsForPoint);
    }

    private int EvaluateIterationsForPoint(double x, double y)
    {
        int iterations = 0;

        var z = new Complex(0, 0);

        for (int i = 0; i < _data.Iterations; i++)
        {
            z = z * z + new Complex(x, y);
            
            if (Complex.Abs(z) > 2)
                break;

            ++iterations;
        }

        return iterations;
    }
}