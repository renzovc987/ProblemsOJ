#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int num1,num2;
    bool igual;
    for(int i=0;i<tc;i++)
    {
        cin>>num1>>num2;
        string s1,s2;
        s1=static_cast<std::ostringstream*>(&(std::ostringstream() << num1))->str();
        s2=static_cast<std::ostringstream*>(&(std::ostringstream() << num2))->str();
        int con=0;
        for(int j=s1.size()-1,k=s2.size()-1;j>=0,k>=0;j--,k--)
        {
            if(s2[k]==s1[j])
            {
                con++;
            }
        }
        if(con==s2.size())
        {
            cout<<"encaixa"<<endl;
        }
        else
        {
            cout<<"nao encaixa"<<endl;
        }


    }
}
