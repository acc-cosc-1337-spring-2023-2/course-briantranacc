#include "val_ref.h"

void val_params(int num)
{
    auto num1 = 100;
    num = 20;
}

void ref_params(int &num)
{
    num = 20;
}