//write include statement for switch header
#include "switch.h"

using std::string;

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
string menu(int num)
{
    string option;

    switch(num)
    {
    case 1:
        option = "Option 1";
        break;
    case 2:
        option = "Option 2";
        break;  
    case 3:
        option = "Option 3";
        break;  
    case 4:
        option = "Option 4";
        break;
    default://works like the else statement in the if-else
        option = "Invalid Option";
        break;

    }

    return option;
}
