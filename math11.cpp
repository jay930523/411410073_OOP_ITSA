#include <iostream>

using namespace std;

int main()
{
    int n,n10,n5,n1;
    cin >> n;
    //%表取餘數，而int間相除仍為整數
    n10=n/10;
    n5=(n%10)/5;
    n1=n%5;
    cout << "NT10=" << n10 << endl;
    cout << "NT5=" << n5 << endl;
    cout << "NT1=" << n1 << endl;

    return 0;
}