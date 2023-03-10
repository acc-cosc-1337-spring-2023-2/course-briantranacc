//write include statement for decisions header
#include "decisions.h"

using std::cout; using std::string;

//Write code for function(s) code here
string menu(int num)
{
    string option;

    switch(num)
    {
    case 1:
        option = "Letter grade using if";
        break;
    case 2:
        option = "Letter grade using switch";
        break;
    case 3:
        option = "Exit";
        break;
    default:
        option = "Invalid Option";
        break;
    }
    return option;
}

string get_letter_grade_using_if(int grade)
{
    string letter_grade;

    if (grade >= 90 && grade <= 100)
    {
        letter_grade = 'A';
    }
    else if (grade >= 80 && grade <= 89)
    {
        letter_grade = 'B';
    }
    else if (grade >= 70 && grade <= 79)
    {
        letter_grade = 'C';
    }
    else if (grade >= 60 && grade <= 69)
    {
        letter_grade = 'D';
    }
    else if (grade >= 0 && grade <= 59)
    {
        letter_grade = 'F';
    }
    else
    {
        letter_grade = "Invalid grade";
    }
    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
    string letter_grade;

    switch(grade)
    {
    case 90 ... 100:
        letter_grade = 'A';
        break;
    case 80 ... 89:
        letter_grade = 'B';
        break;
    case 70 ... 79:
        letter_grade = 'C';
        break;
    case 60 ... 69:
        letter_grade = 'D';
        break;
    case 0 ... 59:
        letter_grade = 'F';
        break;
    default:
        letter_grade = "Invalid grade";
        break;
    }
    

    
    return letter_grade;
}