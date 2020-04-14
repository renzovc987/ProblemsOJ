#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int num;
    int maximo;
    for(int i=0;i<tc;i++)
    {
        vector<int>v;
        maximo=0;
        while(true)
        {
            cin>>num;
            v.push_back(num);
            if(cin.get()=='\n')
            {
                break;
            }
        }
        for(int j=0;j<v.size();j++)
        {
            if(v[j]>maximo)
            {
                maximo=v[j];
            }
        }
        cout<<"Case "<<i+1<<": "<<maximo<<endl;
    }

}
