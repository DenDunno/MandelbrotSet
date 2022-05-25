using System.Numerics;
using System.Windows;

namespace MandelbrotSet
{
    public partial class MainWindow
    {
        public MainWindow()
        {
            InitializeComponent();
        }
        
        private void GenerateCPU(object sender, RoutedEventArgs e)
        {
            GenerateMandelbrotSet();
        }

        private void GenerateMPI(object sender, RoutedEventArgs e)
        {
            GenerateMandelbrotSet();
        }

        private void GenerateOpenMP(object sender, RoutedEventArgs e)
        {
            GenerateMandelbrotSet();
        }
        
        private void GenerateMandelbrotSet()
        {
            var mandelbrotSetFrame = new MandelbrotSetFrame(ReadInput());
            MandelbrotSetFrameResult result = mandelbrotSetFrame.Evaluate();
            
            Image.Source = result.Bitmap.ToImageSource();
            Time.Text = result.Time.ToString();
        }
        
        private MandelbrotSetFrameData ReadInput()
        {
            return new MandelbrotSetFrameData()
            {
                Location = new Vector2(float.Parse(X.Text), -float.Parse(Y.Text)),
                Size = new Vector2((float)Image.Width, (float)Image.Height),
                Zoom = float.Parse(Zoom.Text),
                Iterations = int.Parse(Iterations.Text)
            };
        }
        
        private void SetExample(object sender, RoutedEventArgs e)
        {
            X.Text = "0,3581";
            Y.Text = "-0,672";
            Zoom.Text = "10000";
            Iterations.Text = "2000";
        }
    }
}