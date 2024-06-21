#include <iostream>

using namespace std;

int main()
{
    int a,b,i,temp,sum=0;
    cin >> a >> b;
    //設定b為大數
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a; i<=b; i++)
        sum+=i;
    cout << sum << endl;

    return 0;
}