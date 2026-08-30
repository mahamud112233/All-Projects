#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int *c = new int[6];
    for(int i=0;i<6;i++)
    {
        cin >> c[i];
    }
    return c;
}
int main ()
{   //dynamic array declare and size increase and array delete.
    // int *a = new int[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin >> a[i];
    // }
    // int *b= new int[7];

    // for(int i=0;i<5;i++)
    // {
    //    b[i]=a[i];
    // }
    // delete[] a;
    // for(int i=5;i<7;i++)
    // {
    //     cin >> b[i];
    // }
    // for(int i=0;i<7;i++)
    // {
    //     cout << b[i] << " ";
    // }
    //dynamic arrar return from function.
    int *c = fun();
    for(int i=0;i<6;i++)
    {
        cout << c[i] <<" ";
    }

    return 0;
}