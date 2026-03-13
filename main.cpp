#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double resultpos;
    double resultneg;
    double x;
    double y;
    double z;
    
    
    // TODO
     
    
    // TODO
    // TODO
    // TODO
    cout << "Enter the integers for your quadratic equation.\n" << "Enter A value." << endl;
    cin >> a;
    cout << "Enter B value.\n";
    cin >> b;
    cout << "Lastly enter C value.\n";
    cin >> c;

    x = -b;
    cout << x << endl;
    y = (b * b) - (4 * a * c);
    cout << y << endl;
    z = 2 * a * c;
    cout << z << endl;

    resultpos = ((x + sqrt(y)) / z);
    resultneg = ((x - sqrt(y)) / z);
    
    
    // TODO
    // TODO

    cout << setprecision(2) << fixed;
    // TODO
    cout << "When adding square root: " << resultpos << ". When subtracting square root: " << resultneg << endl;

    return 0;
}
