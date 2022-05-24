using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Windows.Media.Imaging;

public static class BitmapExtensions
{
    public static BitmapImage ToImageSource(this Bitmap bitmap)
    {
        using MemoryStream memory = new MemoryStream();
            
        bitmap.Save(memory, ImageFormat.Bmp);
        memory.Position = 0;
        var result = new BitmapImage();
        result.BeginInit();
        result.StreamSource = memory;
        result.CacheOption = BitmapCacheOption.OnLoad;
        result.EndInit();

        return result;
    }
}