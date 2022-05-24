
using System.Drawing;
using System.Numerics;
using OpenTK.Graphics.OpenGL;

public class MandelbrotSet : IDrawable
{
    private readonly int _maxIterations = 100;
    
    void IDrawable.Draw()
    {
        GL.Color3(Color.Chartreuse);
        GL.Begin(PrimitiveType.Points);
        
        GL.End();
    }

    private void PaintPoint(double x, double y)
    {
        Complex z = new Complex(0, 0);

        for (int i = 0; i < _maxIterations; ++i)
        {
            z = z * z + new Complex(x, y);
            
            if (Complex.Abs(z) > 2)
            {
                GL.Vertex2(x, y);
                break;
            }
        }
    }
}