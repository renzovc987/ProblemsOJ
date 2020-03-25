#include <bits/stdc++.h>

using namespace std;
int repetido(int n)
{
    int n1=n;
    string s;
    s = static_cast<std::ostringstream*>(&(std::ostringstream() << n1))->str();
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            if(s[i]==s[j])
            {
                c++;
            }
        }
    }
    if(c==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int n1,n2;
    int con;
    while(cin>>n1>>n2)
    {
        con=0;
        for(int i=n1;i<=n2;i++)
        {
            if(!repetido(i))
            {
                con++;
            }
        }
        cout<<con<<endl;
    }


}
