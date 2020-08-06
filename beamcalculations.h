#ifndef BEAMCALCULATIONS_H
#define BEAMCALCULATIONS_H

#include "QTextEdit"

class BeamCalculations
{
public:
    BeamCalculations();
    static double CalculateSteelRatio(double &length, double &concCompStrg, double &steelYield, double &moment, double &beamWidth, double &beamEffDepth, QTextEdit *textEdit);
};

#endif // BEAMCALCULATIONS_H
