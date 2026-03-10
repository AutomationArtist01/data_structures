#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 8, 4, 2};
    int i, j, min, t;
    for(i = 0; i < 4; i++)
    {
        min = i;
        for(j = i + 1; j < 5; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }
    for(i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}