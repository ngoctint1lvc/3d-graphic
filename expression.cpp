#include "expression.h"

Expression::Expression()
{
    expression.register_symbol_table(symbol_table);
    symbol_table.add_variable("x", exp_x);
    symbol_table.add_variable("y", exp_y);
    parser.compile("x*x + y*y", expression);
}

Expression::Expression(QString exp)
{
    expression.register_symbol_table(symbol_table);
    symbol_table.add_variable("x", exp_x);
    symbol_table.add_variable("y", exp_y);
    setFormula(exp);
}

double Expression::eval(double x, double y)
{
    exp_x = x;
    exp_y = y;
    return expression.value();
}

void Expression::setFormula(QString exp)
{
    parser.compile(exp.toStdString(), expression);
}

double Expression::formulaX(double x)
{
    exp_x = x;
    return expression.value();
}

double Expression::formulaY(double y)
{
    exp_y = y;
    return expression.value();
}

double Expression::derivativeX(double x, double y)
{
    exp_y = y;
    const double dx1 = this->d;
    const double dx2 = dx1 * 2;
    const double dx3 = dx1 * 3;

    const double m1 = (formulaX(x + dx1) - formulaX(x - dx1)) / 2;
    const double m2 = (formulaX(x + dx2) - formulaX(x - dx2)) / 4;
    const double m3 = (formulaX(x + dx3) - formulaX(x - dx3)) / 6;

    const double fifteen_m1 = 15 * m1;
    const double six_m2     =  6 * m2;
    const double ten_dx1    = 10 * dx1;

    return ((fifteen_m1 - six_m2) + m3) / ten_dx1;
}

double Expression::derivativeY(double x, double y)
{
    exp_x = x;
    const double dx1 = this->d;
    const double dx2 = dx1 * 2;
    const double dx3 = dx1 * 3;

    const double m1 = (formulaY(y + dx1) - formulaY(y - dx1)) / 2;
    const double m2 = (formulaY(y + dx2) - formulaY(y - dx2)) / 4;
    const double m3 = (formulaY(y + dx3) - formulaY(y - dx3)) / 6;

    const double fifteen_m1 = 15 * m1;
    const double six_m2     =  6 * m2;
    const double ten_dx1    = 10 * dx1;

    return ((fifteen_m1 - six_m2) + m3) / ten_dx1;
}
