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
    
    x = -b;
    y = (b * b) - 4 * a * c;
    z = 2 * a * c;
    
    
    
    // TODO
    // TODO
    // TODO
    cout << "Enter the integers for your quadratic equation.\n" << "Enter A value." << endl;
    cin >> a;
    cout << "Enter B value.\n";
    cin >> b;
    cout << "Lastly enter C value.\n";
    cin >> c;

    resultpos = ((x + sqrt(y)) / z);
    resultneg = ((x - sqrt(y)) / z);
    
    
    // TODO
    // TODO

    cout << setprecision(2) << fixed;
    // TODO
    cout << "When adding square root: " << resultpos << ". When subtracting square root: " << resultneg << endl;

    return 0;
}
