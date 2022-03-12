#include <iostream>
#include <ctime>
 
void sort(int* arr, int size_of_arr)
{
    for(int i = size_of_arr - 1; i >= 1; i--)
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }  
}