#include "for_ranged_vec.h"

void iterate_vector_val_param(std::vector<int> v1)
{
    for(auto n: v1)
    {
        n = -1;
    }
}

void iterate_vector_ref_param(std::vector<int> &v1)
{
    for(auto n: v1)
    {
        n = -1;
    }
}

void iterate_vector_ref_param_ref_for_ranged(std::vector<int> &v1)
{
    for(auto &n: v1)
    {
        n = -1;
    }
}