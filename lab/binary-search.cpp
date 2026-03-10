#include <iostream>
using namespace std;
int bs(int a, int arr[], int n)
{
    int low = 0;
    int high = n- 1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(arr[mid] == a)
        {
            cout<< a << " is find in array at " << mid << endl;
            return 0;
        }
        else if(arr[mid] < a)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "element not found" << endl;
    return 0;
}
int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int i, j, temp,a;
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
    cout<<"newly sorted array is " << endl;
    for(i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    cout<<" "<< endl;
    cin >> a;
    bs(a,arr,5);
    return 0;
}