#include<bits/stdc++.h>
using namespace std;
int main ()
{
    list<int> l1;   //initialize
    list<int> l3(10);//initialize+size
    list<int> l4(10,5);//initialize+size+value
    list<int> l5 ={1,2,3,4};//initialize+value
    list<int> l2(l4);//copy l4
    //print list
    for(auto it= l4.begin();it!=l4.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(int x : l2)
    {
        cout << x <<" ";
    }
    //copy array 
    int arr[] = {1,2,3,4};
    list<int> l10(arr,arr+4);
    cout << endl;
    for( int x:l10)
    {
        cout << x << " ";
    }
    //or vector array
    vector<int> v = {100,200,300};
    list <int> l11(v.begin(),v.end());
    cout << endl;
     for( int x:l11)
    {
        cout << x << " ";
    }
    return 0;
}