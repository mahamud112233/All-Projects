#include <bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int real;
    int imag;

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex c)
    {
        Complex temp(0, 0);

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 + c2 + c3;

    cout << c3.real << " + " << c3.imag << "i\n";
    cout << c4.real << " + " << c4.imag << "i";

    return 0;
}