#include <bits/stdc++.h>

using namespace std;
int cantidad_pal(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    return c+1;
}
int main()
{
    int tc;
    cin>>tc;
    vector<double>v(tc);
    vector<int>vn(tc);
    string fruta;
    for(int i=0;i<tc;i++)
    {
        cin>>v[i];
        cin.ignore();
        getline(cin,fruta);
        vn[i]=cantidad_pal(fruta);
    }
    double acum=0;
    double acum2=0;
    for(int i=0;i<tc;i++)
    {
        acum+=vn[i];
        acum2+=v[i];
        cout<<"day "<<i+1<<": "<<vn[i]<<" kg"<<endl;
    }
    double prom1=acum/tc;
    double prom2=acum2/tc;
    cout<<fixed<<setprecision(2)<<prom1<<" kg by day"<<endl;
    cout<<"R$ "<<fixed<<setprecision(2)<<prom2<<" by day"<<endl;
}
