#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,i,j;
     int k,f=0;
     getline(cin, s);
     for(int i='a', j='A'; i<='z'; i++, j++)
     {
        f=0;
        for(k=0;s[k]!='\0';k++)
        {
            if(s[k]==i || s[k]==j)
            {
                f=1;
                break;
            }
        }
             if(f==0)
             break;

     }
           if(f==1)
           cout<<"pangram";
           else
           cout<<"not pangram";

    return 0;
}