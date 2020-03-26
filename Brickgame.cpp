#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int settam;
    int num;

    for(int i=0;i<tc;i++)
    {
        cin>>settam;
        vector<int>s;
        for(int j=0;j<settam;j++)
        {
            cin>>num;
            s.push_back(num);
        }
        sort(s.begin(),s.begin()+settam);
        int ite=0;
        double t=settam/2;
        int tammedio=round(t);
        int medio;
        for(int i=0;i<settam;i++)
        {
            if(ite==tammedio)
            {
                medio=s[ite];
            }
            ite++;

        }
        cout<<"Case "<<i+1<<": "<<medio<<endl;

    }
}