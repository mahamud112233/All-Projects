#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[100];
    char section;
    int marks;
};
int main()
{
    int a;
    cin >> a;
    for (int i =0; i < a; i++)
    {
        Student arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i].id >> arr[i].name >> arr[i].section >> arr[i].marks;
        }

        Student best = arr[0];
        if (arr[1].marks > best.marks || (arr[1].marks == best.marks && arr[1].id < best.id))
        {
            best = arr[1];
        }
        if (arr[2].marks > best.marks || (arr[2].marks == best.marks && arr[2].id < best.id))
        {
            best = arr[2];
        }
        cout << best.id << " " << best.name << " " << best.section << " " << best.marks << endl;
    }
    return 0;
}