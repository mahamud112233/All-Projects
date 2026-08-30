#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;

public:

    Person(string n)
    {
        name = n;
    }

    void show()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    int id;

public:

    Student(string n, int i) : Person(n)
    {
        id = i;
    }

    // Function Overloading
    void display()
    {
        cout << name << " " << id << endl;
    }

    void display(string course)
    {
        cout << name << " " << id << " " << course << endl;
    }

    // Operator Overloading
    bool operator==(Student s)
    {
        return id == s.id;
    }
};

int main()
{
    Student s1("Rahim", 101);
    Student s2("Karim", 102);

    s1.show();

    s1.display();
    s1.display("CSE");

    if(s1 == s2)
        cout << "Same student\n";
    else
        cout << "Different student\n";
}