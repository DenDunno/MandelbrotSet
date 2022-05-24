using System.Collections.Generic;
using System.Drawing;

public class MandelbrotSetColors
{
    private readonly int _iterations;
    private readonly IReadOnlyDictionary<int, Color> _colors = new Dictionary<int, Color>()
    {
        {0, Color.FromArgb(66, 30, 15)},
        {1, Color.FromArgb(25, 7, 26)},
        {2, Color.FromArgb(9, 1, 47)},
        {3, Color.FromArgb(4, 4, 73)},
        {4, Color.FromArgb(0, 7, 100)},
        {5, Color.FromArgb(12, 44, 138)},
        {6, Color.FromArgb(24, 82, 177)},
        {7, Color.FromArgb(57, 125, 209)},
        {8, Color.FromArgb(134, 181, 229)},
        {9, Color.FromArgb(211, 236, 248)},
        {10, Color.FromArgb(241, 233, 191)},
        {11, Color.FromArgb(248, 201, 95)},
        {12, Color.FromArgb(255, 170, 0)},
        {13, Color.FromArgb(204, 128, 0)},
        {14, Color.FromArgb(153, 87, 0)},
        {15, Color.FromArgb(106, 52, 3)},
    };
    
    public MandelbrotSetColors(int iterations)
    {
        _iterations = iterations;
    }

    public Color GetColor(int iterations)
    {
        Color result = Color.Black;

        if (iterations != _iterations)
        {
            result = _colors[iterations % 16];
			
        }
		
        return result;
    }
}