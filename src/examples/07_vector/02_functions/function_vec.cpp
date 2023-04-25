#include "function_vec.h"

void vector_val_ref_params(std::vector<int> n1, std::vector<int> &n2, const std::vector<int> &n3)
{
    n1[0] = -100;
    n2[0] = -100;
    //n3[0] = -100; can't modify a const (read only) parameter
}