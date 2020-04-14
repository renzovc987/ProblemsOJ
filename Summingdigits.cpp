#include <bits/stdc++.h>

using namespace std;
int convert(string n)
{
    int acum=0;
    for(int i=0;i<n.size();i++)
    {
        int c=n[i]-'0';
        acum+=c;
    }
    return acum;
}
int main()
{
   unsigned long long numero;
   string num;
   int tam=2;
   while(true)
   {
       cin>>numero;
       if(numero==0)
       {
           break;
       }
       else
       {
           num = static_cast<std::ostringstream*>(&(std::ostringstream() << numero))->str();
           while(tam>1)
           {
               int convertido=convert(num);
               num = static_cast<std::ostringstream*>(&(std::ostringstream() << convertido))->str();
               tam=num.size();
           }
       }
        cout<<num<<endl;
        tam=2;
   }
}
