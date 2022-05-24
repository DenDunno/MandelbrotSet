using System.Diagnostics;
using System.Drawing;

public class MandelbrotSetFrame
{
    private readonly MandelbrotSetAlgorithm _algorithm;
    private readonly Bitmap _bitmap;
    private readonly Stopwatch _stopwatch;
    
    public MandelbrotSetFrame(MandelbrotSetFrameData data)
    {
        _algorithm = new MandelbrotSetAlgorithm(data);
        _bitmap = new Bitmap((int)data.Size.X, (int)data.Size.Y);
        _stopwatch = new Stopwatch();
    }

    public MandelbrotSetFrameResult Evaluate()
    {
        _stopwatch.Start();
        Run();
        _stopwatch.Stop();

        return new MandelbrotSetFrameResult(_bitmap, _stopwatch.ElapsedMilliseconds);
    }

    private void Run()
    {
        for (int i = 0; i < _bitmap.Height; i++)
        {
            for (int j = 0; j < _bitmap.Width; j++)
            {
                _bitmap.SetPixel(j, i, _algorithm.EvaluatePoint(j, i));
            }
        }
    }
}