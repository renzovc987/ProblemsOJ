#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;
   while(cin>>a && a!=0)
   {
       cin>>b>>c;

           double days;
           days=(b*c)/double(c-a);
           int d=trunc(days);
           int pages=a*days;
            if(pages<1)
            {
                cout<<pages<<" paginas"<<endl;
            }
            else if(pages==1)
            {
                cout<<pages<<" pagina"<<endl;
            }
            else
            {
                cout<<pages<<" paginas"<<endl;
            }


   }
}
