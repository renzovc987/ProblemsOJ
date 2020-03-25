#include <bits/stdc++.h>

using namespace std;

int main()
{
    string jingle;
    while(true)
    {
        cin>>jingle;
        if(jingle=="*")
        {
            break;
        }
        double sum=0;
        int con=0;
        for(int i=0;i<jingle.size();i++)
        {
            if(jingle[i]=='W')
            {
                sum+=1;
            }
            else if(jingle[i]=='H')
            {
                sum+=(0.5);
            }
            else if(jingle[i]=='Q')
            {
                sum+=(0.25);
            }
            else if(jingle[i]=='E')
            {
                sum+=(0.125);
            }
            else if(jingle[i]=='S')
            {
                sum+=(0.0625);
            }
            else if(jingle[i]=='T')
            {
                sum+=(0.03125);
            }
            else if(jingle[i]=='X')
            {
                sum+=(0.015625);
            }
            else if(jingle[i]=='/' && i>0)
            {
                if(sum==1)
                {
                    con++;
                }
                sum=0;
            }
        }
        cout<<con<<endl;

    }
}
