//add include statements
#include "func.h"

using std::string;

//add function code here

double get_gc_content(const string& dna)
{
    int gc_string_length = dna.length();
    double gc_content, gc_accumulator = 0.0;

    for (int i = 0; i < gc_string_length; i++)
    {
        if (dna[i] == 'G')
        {
            gc_accumulator++;
        }
        else if (dna[i] == 'C')
        {
            gc_accumulator++;
        }
        
    }

    gc_content = gc_accumulator / gc_string_length;

    return gc_content;
}


string get_dna_complement(string dna)
{
    string dna_complement = reverse_string(dna);
    int dna_comp_length = dna_complement.length();

	for (int i = 0; i < dna_comp_length; i++)
		if (dna_complement[i] == 'A')
		{
            dna_complement[i] = 'T';
        }	
        else if (dna_complement[i] == 'T')
		{
            dna_complement[i] = 'A';
        }	
        else if (dna_complement[i] == 'C')
		{
            dna_complement[i] = 'G';
        }	
        else if (dna_complement[i] == 'G')
		{
            dna_complement[i] = 'C';
        }	

    return dna_complement;
}


string reverse_string(string dna)
{
    string reversed_string;
    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reversed_string += dna[i];
    }
	
    return reversed_string;
}
