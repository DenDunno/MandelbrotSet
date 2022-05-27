#include "mainwindow.h"
#include "cpualgorithm.h"
#include "ui_mainwindow.h"
#include "openmpalgorithm.h"

void GenerateMandelbrotSetFrame(MandelbrotSetFrameAlgorithm& algorithm, Ui::MainWindow* ui);
MandelbrotSetFrameData readInput(Ui::MainWindow* ui);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CPUButton_clicked()
{
    CPUAlgorithm algorithm = CPUAlgorithm(readInput(ui));
    GenerateMandelbrotSetFrame(algorithm , ui);
}


void MainWindow::on_MPIButton_clicked()
{
}


void MainWindow::on_OpenMPButton_clicked()
{
    OpenMPAlgorithm algorithm = OpenMPAlgorithm(readInput(ui));
    GenerateMandelbrotSetFrame(algorithm , ui);
}


void MainWindow::on_ExampleButton_clicked()
{
    ui->X->setText("0.00135");
    ui->Y->setText("0.00001");
    ui->Zoom->setText("30000");
    ui->Iterations->setText("30000");
}


void GenerateMandelbrotSetFrame(MandelbrotSetFrameAlgorithm& algorithm, Ui::MainWindow* ui)
{
    const clock_t begin_time = clock();
    const QImage& frame = algorithm.evaluate();
    const float elapsed_time = float(clock() - begin_time) / CLOCKS_PER_SEC;

    ui->Image->setPixmap(QPixmap::fromImage(frame));
    ui->Time->setText(QString::number(elapsed_time));
}


MandelbrotSetFrameData readInput(Ui::MainWindow* ui)
{
    QPoint size = QPoint(ui->Image->width(), ui->Image->height());
    double x = ui->X->text().toDouble();
    double y = -(ui->Y->text().toDouble());
    double zoom = ui->Zoom->text().toInt();
    double iterations = ui->Iterations->text().toInt();

    return MandelbrotSetFrameData(size, QVector2D(x, y), zoom, iterations);
}
