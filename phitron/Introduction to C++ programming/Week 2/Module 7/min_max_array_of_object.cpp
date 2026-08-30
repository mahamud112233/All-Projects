#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    int roll;
    int marks;
};
int main()
{
    int a;
    cin >> a;
    Student arr[a];
    for (int i = 0; i < a; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].cls >> arr[i].marks;
    }
    Student lowest;
    lowest.marks = INT_MAX;
    for (int i = 0; i < a; i++)
    {
        if (arr[i].marks < lowest.marks)

        {
            lowest = arr[i];
        }
    }
    cout << lowest.name << " " << lowest.roll << " " << lowest.cls << " " << lowest.marks << " " << endl;
    return 0;
}