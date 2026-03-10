#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    int a,i;
    cin >> a;
    for(i = 0; i < 5; i++){
        if(arr[i]==a){
            cout<< a << " is find in array at " << i+1 << endl;
        }
    }
    return 0;
}