#include <bits/stdc++.h>

using namespace std;
int isort(vector<int>A)
{
    int con=0;
    int aux,p;
    for(int i=0;i<A.size();i++)
    {
        p=i;
        aux=A[i];
        while(p>0 && A[p-1]>aux)
        {
            A[p]=A[p-1];
            p--;
            con++;
        }
        A[p]=aux;
    }
    return con;
}
int main()
{
    int tc;
    cin>>tc;
    int can;
    for(int i=0;i<tc;i++)
    {
        cin>>can;
        vector<int>V(can);
        for(int j=0;j<can;j++)
        {
            cin>>V[j];
        }
        cout<<"Optimal train swapping takes "<<isort(V)<<" swaps."<<endl;
    }
}
