#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <beamcalculations.h>
#include "QLineEdit"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_showCalc_clicked()
{
    double beamLength = ui->tab_beam->findChild<QLineEdit*>("txt_BeamLength")->text().toDouble();
    double concCompStrg = ui->tab_beam->findChild<QLineEdit*>("txt_ConcComprStrg")->text().toDouble();
    double yieldStress = ui->tab_beam->findChild<QLineEdit*>("txt_YieldStress")->text().toDouble();
    double designMoment = ui->tab_beam->findChild<QLineEdit*>("txt_DesignMoment")->text().toDouble();
    double beamWidth = ui->tab_beam->findChild<QLineEdit*>("txt_BeamWidth")->text().toDouble();
    double effectDepth = ui->tab_beam->findChild<QLineEdit*>("txt_EffectDepth")->text().toDouble();

    QTextEdit* textEdit = ui->mainWindowTextEdit;
    double steelPerc = BeamCalculations::CalculateSteelRatio(beamLength, concCompStrg, yieldStress, designMoment, beamWidth, effectDepth, textEdit);
    //ui->mainWindowTextEdit->setText(QString::number(steelPerc));
}
