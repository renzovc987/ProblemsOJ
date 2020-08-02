#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cantidad=0;
    string estado;
    int tc;
    cin>>tc;
    cin.ignore();
    for(int i=0;i<tc;i++)
    {
        getline(cin,estado);
        if(estado=="report")
        {
            cout<<cantidad<<endl;
        }
        else
        {
            for(int j=0;j<estado.size();j++)
            {
                if(estado[j]==' ')
                {
                    int tam= estado.size();
                    int indice=j+1;
                    string substring = estado.substr(indice,tam-indice);
                    stringstream ss(substring);
                    int x=0;
                    ss>>x;
                    cantidad+=x;
                }
            }
        }
    }
}
