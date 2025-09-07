#include<iostream>
using namespace std;
class complex
{
    float real,imag;
    public:

    complex(float real , float imag)
    {
        real=-real;
        imag=-imag;

    }

    void display()
    {
        cout<<"The value of real="<<real;
        cout<<"The value of imag="<<imag;

    }
    friend complex operator +(complex c, complex d)
    {
        d.real= d.real + c.real;
        d.imag = d.imag +c.imag;
        return d;

    }
};
int main()
{
    complex X(4.0,4.0);
    complex Y(6.0,6.0);
    complex Z=X+Y;
    Z.display();
    return 0;


}
