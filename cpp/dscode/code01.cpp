///A program that can solve the quadratic equation.

#include<iostream>
#include<cmath>
using namespace std;

class equation
{
public:
    int a, b, c;
    double x1, x2, d;
    void input();
    void quadratic();
};

void equation::input(void)
{
    cout << "Enter the coefficient for a, b and c: " << endl;
    cin  >> a >> b >> c;
}

void equation:: quadratic(void)
{
    d = (b*b)- 4*a*c; //discriminant
    if(d == 0)
    {
        x1 = -b/(2*a);
        cout << "The roots are real and same" << endl;
        cout << "X1 = X2 = " << x1 << endl;
    }
    else if(d > 0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        cout << "The roots are real and different" << endl;
        cout << " X1 = " << x1 << endl << " X2 = " << x2 << endl;
    }
    else
    {
        cout << "The equation has no real roots." << endl;
    }
}

int main()
{
    equation obj;
    obj.input();
    obj.quadratic();
    return 0;
}
