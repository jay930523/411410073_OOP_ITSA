#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a;
    cin >> a ;
    cout << fixed << setprecision(1) << round(a*a*10)/10.0 << endl;

    return 0;
}