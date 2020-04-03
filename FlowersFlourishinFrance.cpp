#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cadena;
    string item;
    while(true)
    {
        getline(cin,cadena);
        vector<string>v;
        vector<char>vc;
        if(cadena=="*")
        {
            break;
        }
        else
        {
            bool cumple;
            stringstream ss(cadena);
            while(getline(ss,item,' '))
            {
                v.push_back(item);
            }
            int tam = v.size();
            for(int i=0;i<tam;i++)
            {
                for(int j=0;j<v[i].size();j++)
                {
                    char a=tolower(v[i][0]);
                    vc.push_back(a);
                    break;
                }

            }
            for(int i=0;i<vc.size();i++)
            {
                if(vc[i]!=vc[i-1] && i>=1)
                {
                    cumple=false;
                    break;
                }
                else
                {
                    cumple=true;

                }
            }
            if(cumple)
            {
                cout<<"Y"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }




        }
    }
}
