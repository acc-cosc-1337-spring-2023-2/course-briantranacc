//cpp
#include "arrays_pointers.h"

ArrayList::ArrayList(int* list, const int capacity) : elements(list)
{
    this->capacity = capacity;
}

void ArrayList::Add(int value)
{
    if(current_index < capacity)
    {
        elements[current_index] = value;
        current_index++;
    }
}

int ArrayList::Get_First_Index_Of(int value)
{
    auto index = -1;
    auto local_current_index = 0;

    while(local_current_index < current_index)
    {
        if(elements[local_current_index] == value)
        {
            index = local_current_index;
            break;
        }

        local_current_index++;
    }

    return index;
}

void ArrayList::Delete(int value)
{
    auto index = Get_First_Index_Of(value);

    if(index != -1)
    {
        AdjustElements(index);
    }
}

void ArrayList::AdjustElements(int index)
{
    if(index == current_index-1)
    {
        current_index--;
        return;
    }

    for(; index < current_index; index++)
    {
        elements[index] = elements[index+1];
    }

    current_index--;    
}