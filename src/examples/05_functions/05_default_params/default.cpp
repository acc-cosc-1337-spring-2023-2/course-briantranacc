#include "default.h"

int get_gross_pay(int hours, int pay_rate)
{
    return hours * pay_rate;
}

int get_gross_pay(int hours, double pay_rate)
{
    return hours * pay_rate;
}

int get_gross_pay(int hours, double pay_rate, int sales)
{
    return hours * pay_rate + sales * .01;
}