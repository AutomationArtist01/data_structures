#include <iostream>
using namespace std;

int main()
{
    int n, i, in, p;
    int t = 0;  

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];   

    while (true) {
        cout << "Menu:\n";
        cout << "1. Pop\n";
        cout << "2. Push\n";
        cout << "3. Print\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> in;

        if (in == 1) {   
            if (t > 0) {
                t--;
                cout << "Element popped successfully\n";
            } else {
                cout << "-------------------array is empty-------------------\n";
            }
        }
        else if (in == 2) {  
            if (t < n) {
                cout << "Enter number: ";
                cin >> p;
                a[t] = p;
                t++;
                cout << "Element pushed successfully\n";
            } else {
                cout << "-------------------array is full-------------------\n";
            }
        }
        else if (in == 3) {   
            if (t == 0) {
                cout << "array is empty\n";
            } else {
                cout << "array elements:\n";
                for (i = 0; i < t; i++) {
                    cout << a[i] << endl;
                }
            }
        }
        else if (in == 4) {   
            cout << "-------------------Exiting program-------------------\n";
            break;
        }
        else {
            cout << "Invalid choice! Enter 1, 2, 3, or 4.\n";
        }
    }

    return 0;
}
