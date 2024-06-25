#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a=0;
    while(n>0)
    {
        if (n/10>=0)
        {
            a=n%10;
            sum=sum+a;
            n=n/10;
        }
        else
        {
            sum=sum+n;
        }
    }

    cout <<sum<<endl;
    return 0;
}
