#include <bits/stdc++.h>

using namespace std;
int mayor(vector<int>v)
{
    int may=1000000;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<may)
        {
            may=v[i];
        }
    }
    return may;
}
int segmayor(vector<int>v)
{
    int may=mayor(v);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==may)
        {
            v.erase(v.begin()+i);
        }
    }
    int smay=1000000;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]<smay)
        {
            smay=v[i];
        }
    }
    return smay;

}
int main()
{
    int A,D;
    bool offside;
    while(true)
    {
        cin>>A>>D;
        if(A!=0 && D!=0)
        {
            vector<int>va(A);
            vector<int>vd(D);
            for(int i=0;i<A;i++)
            {
                cin>>va[i];
            }
            for(int i=0;i<D;i++)
            {
                cin>>vd[i];
            }
            for(int i=0;i<va.size();i++)
            {
                    if(va[i]<segmayor(vd) || va[i]<mayor(vd))
                    {
                        offside=true;
                        break;
                    }
                    else
                    {
                        offside=false;
                    }
            }

            if(offside==true)
            {
                cout<<"Y"<<endl;
            }
            else
            {
                cout<<"N"<<endl;
            }
        }
        else
        {
            break;
        }

    }
}