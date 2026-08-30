#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};


int main()
{
    int a;
    cin >> a;

    Student *arr = new Student[a];
    for (int j = 0; j < a; j++)
    {
        cin >> arr[j].name >> arr[j].roll >> arr[j].marks;
    }
    reverse(arr,arr+a);
    for (int j = 0; j < a; j++)
    {
        cout << arr[j].name << " " << arr[j].roll << " " << arr[j].marks << endl;
    }

    return 0;
}