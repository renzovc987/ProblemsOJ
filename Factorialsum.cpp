#include <iostream>

using namespace std;
unsigned long long factorial(unsigned long long n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    unsigned long long n1,n2;
    while(cin>>n1>>n2)
    {
        cout<<factorial(n1)+factorial(n2)<<endl;
    }
}
