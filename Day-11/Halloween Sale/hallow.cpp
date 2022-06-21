#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,d,m,s,g=0,sum=0;
    cin>>p>>d>>m>>s;
    while(1)
    {
        sum+=p;
        if(sum<=s)
        {
            g++;
            if(p-d>=m)
            {
                p-=d;

            }
            else
            {
                p=m;
            }
        }
        else
        {
            break;
        }
    }
    cout<<g;
    return 0;
}