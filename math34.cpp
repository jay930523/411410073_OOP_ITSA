#include <iostream>

using namespace std;

int main()
{
    int x,i;
    cin >>x;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            if(i==1)
                cout << i;
            else
                cout << " " << i;
        }
    }
    cout << "\n";

    return 0;
}