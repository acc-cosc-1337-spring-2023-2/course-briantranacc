#include "function_str.h"

void str_val_ref_param(std::string str1, std::string &str2, const std::string &str3)
{
    str1 = "changed";
    str2 = "changed";
    //str3 = "changed"; //produces a build/syntax error b/c it is read-only
    //cout<<str3<<"\n"; //this would work
}