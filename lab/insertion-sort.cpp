#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int i, j, k;
    for(i = 1; i < 5; i++)
    {
    k = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > k)
    {
    arr[j + 1] = arr[j];
    j = j - 1;
    }
    arr[j + 1] = k;
    }
    for(i = 0; i < 5; i++)
    {
    cout << arr[i];
    }
    return 0;
}