#include <iostream>
using namespace std;

int merge(int a[], int l, int m, int h)
{
    int t[100];
    int i = l;
    int j = m + 1;
    int k = l;
    while(i <= m && j <= h)
    {
        if(a[i] < a[j])
        {
            t[k] = a[i];
            i++;
        }
        else
        {
            t[k] = a[j];
            j++;
        }
        k++;
    }
    while(i <= m)
    {
        t[k] = a[i];
        i++;
        k++;
    }
    while(j <= h)
    {
        t[k] = a[j];
        j++;
        k++;
    }
    for(i = l; i <= h; i++)
    {
        a[i] = t[i];
    }
    return 0;
}
int mergeSort(int a[], int l, int h)
{
    int m;
    if(l < h)
    {
        m = (l + h) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, h);
        merge(a, l, m, h);
    }
    return 0;
}
int main()
{
    int a[5] = {5, 3, 8, 4, 2};
    int i;
    mergeSort(a, 0, 4);
    for(i = 0; i < 5; i++)
    {
        cout << a[i];
    }
    return 0;
}