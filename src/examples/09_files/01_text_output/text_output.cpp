#include "text_output.h"

using std::ofstream; using std::cout;
using std::ifstream; using std::string;
using std::getline;

void output_data_to_file()
{
    cout<<"Create file object\n";
    ofstream myFile;
    cout<<"Open the file\n";
    myFile.open("example.dat");

    cout<<"Write to file\n";
    myFile<<"Write line to file\n";
    myFile<<"Write another line to file\n";
    myFile<<"Write another line to file\n";
    
    cout<<"Close the file\n";
    myFile.close();

}

void read_data_from_file()
{
    cout<<"\nCreate file object\n";
    string line;//represent one line read from the file
    ifstream myFile;
    cout<<"Open the file\n";
    myFile.open("example.dat");


    if(myFile.is_open())
    {   cout<<"Read from file\n";
        while(getline(myFile, line))
        {
            cout<<line<<"\n";
        }
        
        cout<<"Close the file\n";
        myFile.close();
    }
    else
    {
        cout<<"Unable to open the file\n";
    }
}