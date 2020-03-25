#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int productos;
    int cantidad;
    for(int i=0;i<tc;i++)
    {
        cin>>productos;
        vector< pair<string,double> >v1(productos);
        for(int j=0;j<productos;j++)
        {
            cin>>v1[j].first>>v1[j].second;
        }
        cin>>cantidad;
        vector< pair<string,int> >v2(cantidad);
        for(int j=0;j<cantidad;j++)
        {
            cin>>v2[j].first>>v2[j].second;
        }
        double acum=0;
        for(int j=0;j<productos;j++)
        {
            for(int k=0;k<cantidad;k++)
            {
                if(v1[j].first==v2[k].first)
                {
                    acum+=v1[j].second*v2[k].second;
                }
            }
        }
        cout<<"R$ "<<fixed<<setprecision(2)<<acum<<endl;
    }
}
