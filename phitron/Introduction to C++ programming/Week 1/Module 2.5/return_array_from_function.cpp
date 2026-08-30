#include <bits/stdc++.h>
using namespace std;
int* get_array(int a)
{
    int* c= new int[a];
    for(int i=0;i<a;i++)
    {
        cin >> c[i];
    }
    return c;
}
int main()
{
    int a;
    cin >> a;
    int *b = get_array(a);
    for (int i = 0; i < a; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}