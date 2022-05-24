using System.Drawing;

public class MandelbrotSetFrameResult
{
    public readonly Bitmap Bitmap;
    public readonly long Time;

    public MandelbrotSetFrameResult(Bitmap bitmap, long time)
    {
        Bitmap = bitmap;
        Time = time;
    }
}