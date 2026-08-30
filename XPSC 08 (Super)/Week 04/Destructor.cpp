#include <iostream>
using namespace std;
class dis
{
    float f, i;

public:
    void display();
    dis(float x, float y);
    void normalize();
    ~dis();
};
dis::dis(float x, float y)
{
    f = x;
    i = y;
}
void dis::display()
{
    cout << (f * 12.0) + i << '\n';
}
void dis::normalize()
{
    if (i >= 12)
    {
        cout << "Normal\n";
    }
    else
    {
        cout << "Not\n";
    }
}
dis::~dis()
{
    cout << "Destructing\n";
}
int main()
{
    dis ob(6.7, 12.2);
    ob.display();
    ob.normalize();
    return 0;
}