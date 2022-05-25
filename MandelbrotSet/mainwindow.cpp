#include "mainwindow.h"
#include "mandelbrotsetframe.h"
#include "ui_mainwindow.h"

void GenerateMandelbrotSetFrame(Ui::MainWindow* ui);
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
    GenerateMandelbrotSetFrame(ui);
}


void MainWindow::on_MPIButton_clicked()
{
    GenerateMandelbrotSetFrame(ui);
}


void MainWindow::on_OpenMPButton_clicked()
{
    GenerateMandelbrotSetFrame(ui);
}


void MainWindow::on_ExampleButton_clicked()
{
    ui->X->setText("0.009");
    ui->Y->setText("0.199");
    ui->Zoom->setText("300");
    ui->Iterations->setText("2000");
}


void GenerateMandelbrotSetFrame(Ui::MainWindow* ui)
{
    MandelbrotSetFrame frame = MandelbrotSetFrame(readInput(ui));
    MandelbrotSetFrameResult result = frame.evaluate();

    QPixmap pixmap = QPixmap::fromImage(result.image());
    QString time = QString::number(result.time());

    ui->Image->setPixmap(pixmap);
    ui->Time->setText(time);
}


MandelbrotSetFrameData readInput(Ui::MainWindow* ui)
{
    QPoint size = QPoint(ui->Image->width(), ui->Image->height());
    QString strin = ui->Y->text();

    double x = ui->X->text().toDouble();
    double y = -(ui->Y->text().toDouble());
    double zoom = ui->Zoom->text().toInt();
    double iterations = ui->Iterations->text().toInt();

    return MandelbrotSetFrameData(size, QVector2D(x, y), zoom, iterations);
}
