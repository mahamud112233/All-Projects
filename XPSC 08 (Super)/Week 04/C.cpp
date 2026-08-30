#include <bits/stdc++.h>
using namespace std;
string name;
class f
{
    
    string name;
    int id;

public:
    void intput()
    {
        string s;
        int i;
        cin >> s >> i;
        name = s;
        id = i;
    }
    void output()
    {
        int b;
        b = id % 5;
        if (b != 0)
        {
            cout << "d\n";
        }
        else
        {
            cout << "Not D\n";
        }
    }
};
int main()
{

    f a;
    a.intput();
    a.output();

    return 0;
}