#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string nm;
    int cls;
    char s;
    int id;

};

int main ()
{
    int a;
    cin >> a;
    Student arr[a];
    for (int i=0;i<a;i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id ;
    } 
    for (int i=0;i<a/2;i++)
    {
        swap(arr[i].s,arr[a-1-i].s);
    }
    for (int i=0;i<a;i++)
    {
        cout << arr[i].nm << " " << arr[i].cls <<" " << arr[i].s << " " << arr[i].id << endl;
    }
    return 0;
}