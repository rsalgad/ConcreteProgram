#include "beamcalculations.h"
#include "QtMath"
#include "QTextEdit"

BeamCalculations::BeamCalculations()
{

}

double BeamCalculations::CalculateSteelRatio(double &length, double &concCompStrg, double &steelYield, double &moment, double &beamWidth, double &beamEffDepth, QTextEdit *textEdit)
{
    double steelRatio;
    double Rn = moment / (1 * beamWidth * pow(beamEffDepth, 2));
    textEdit->append("Rn = " + QString::number(Rn));
    steelRatio = (0.85*concCompStrg/steelYield)*(1 - sqrt(1 - 2*Rn/(0.85*concCompStrg)));
    textEdit->append("Steel % = " + QString::number(steelRatio));
    return steelRatio;
}
