#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc,element;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        int *p;
        p=new int[11];
        int k=0;
        while(true)
        {
            cin>>*(p+k);
            k++;
            if(cin.get()=='\n')
            {
                break;
            }
        }
        vector<int>v(k);
        for(int j=0;j<k;j++)
        {
            v[j]=*(p+j);
        }
        sort(v.begin(),v.end());
        int indice = (k/2);
        cout<<"Case "<<i+1<<": "<<v[indice]<<endl;



    }
}
