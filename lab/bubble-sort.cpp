#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int i, j, temp;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
}