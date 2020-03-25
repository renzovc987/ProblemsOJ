#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    while(true)
    {

        cin>>n>>m;
        if(n!=0 && m!=0)
        {
            vector<int>v(m);
            set <int> vc;
            for(int i=0;i<v.size();i++)
            {
                cin>>v[i];
            }
            for(int j=0;j<v.size();j++)
            {
                for(int k=j+1;k<v.size();k++)
                {
                    if(v[j]==v[k])
                    {
                        vc.insert(v[j]);
                        break;
                    }
                }
            }
            cout<<vc.size()<<endl;
        }
        else
        {
            break;
        }

    }

}