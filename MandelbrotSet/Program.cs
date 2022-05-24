using OpenTK.Windowing.GraphicsLibraryFramework;

var windowFactory = new WindowFactory();
var window = windowFactory.Create();

var camera = new Camera();
var coordinateSystem = new DrawableWithSwitching(new CoordinateSystem());
var mandelbrotSet = new MandelbrotSet();
var renderer = new Renderer(new IDrawable[]{coordinateSystem, mandelbrotSet, camera});

var commands = new Commands(new List<Command>()
{
    new(Keys.D, coordinateSystem.Toggle),
});

var keyboardInput = new KeyboardInput(window.KeyboardState, commands);
var mouseInput = new MouseInput(window.MouseState, camera);
var updateCycle = new UpdateCycle(window, new IUpdatable[]{keyboardInput, mouseInput, renderer});

updateCycle.Run();
window.Run();