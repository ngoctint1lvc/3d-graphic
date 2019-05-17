#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <QString>
#include <QJSEngine>
#include "exprtk.hpp"

class Expression
{
public:
    Expression();
    Expression(QString exp);
    Expression(const Expression&);
    Expression& operator=(const Expression&);
    void setFormula(QString exp);
    double eval(double x, double y);
    double derivativeX(double x, double y);
    double derivativeY(double x, double y);

private:
    double formulaX(double x);
    double formulaY(double y);
    exprtk::expression<double> expression;
    double exp_x;
    double exp_y;
    exprtk::symbol_table<double> symbol_table;
    exprtk::parser<double> parser;
    const double d = 1E-7;
};

#endif // EXPRESSION_H
