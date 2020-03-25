#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
        cin>>tc;
        int shots;
        string cadena;
        for(int i=0;i<tc;i++)
        {
            cin>>shots;
            vector<int>v(shots);
            for(int j=0;j<shots;j++)
            {
                cin>>v[j];
            }
            cin>>cadena;
            int h=0;
            for(int k=0;k<cadena.size();k++)
            {
                if(cadena[k]=='S' && (v[k]==1 || v[k]==2))
                {
                    h++;
                }
                else if(cadena[k]=='J' && v[k]>2)
                {
                    h++;
                }
            }
            cout<<h<<endl;


        }


}