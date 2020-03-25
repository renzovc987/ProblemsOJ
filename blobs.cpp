#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin>>tc;
    float food;
        for(int i=0;i<tc;i++)
        {
            scanf("%f", &food);
            int con=0;
            while(food>1)
            {
                food=food/2;
                con++;
            }
            cout<<con<<" dias"<<endl;
        }

}
