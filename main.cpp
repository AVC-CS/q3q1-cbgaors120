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

    x = (b * -1);
    //cout << "our programmed math\n" "\n"<< "x= " << x << endl;
    y = sqrt((b * b) - (4 * a * c));
    //cout << y << endl;
    z = 2 * a;
    //cout << z << endl;

    resultpos = ((x + y) / z);
    resultneg = ((x - y) / z);

    
    
    // TODO
    // TODO

    cout << setprecision(2) << fixed;
    // TODO
    if (resultpos > resultneg)
    {
        cout << "When adding square root: " << resultpos << ". When subtracting square root: " << resultneg << endl;
    }
    else {
        
        cout << "When subtracting square root: " << resultneg << ". When adding square root: " << resultpos << endl;
        }

    return 0;
}
