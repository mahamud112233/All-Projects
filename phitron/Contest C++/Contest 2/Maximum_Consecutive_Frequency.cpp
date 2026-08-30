#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i=0;i<a;i++)
    {
        cin >> arr[i];
    }
    int b=0,c=1 , d=arr[0];
    for (int i=0;i<a-1;i++)
    {
        if (arr[i]== arr[i+1])
        {
            c++;
            if(b<c)
            {
               d=arr[i]; 
            }
            
        }
        else
        {
            if(b<c)
            {
                b=c;
               d=arr[i]; 
            }
            c=1;
            
        }
    }
    cout << d << " " << max(b,c) << endl;
    return 0;
}