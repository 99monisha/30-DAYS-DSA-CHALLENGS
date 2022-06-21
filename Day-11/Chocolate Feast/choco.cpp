#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,c,p,q,r,t,i;
     cin>>t;
     for(i=0;i<t;i++)
     {
        cin>>n>>c>>m;
        p=n/c;
        r=p;
        while(1)
        {
            if(r>=m)
            {
                q=r/m;
                r=r%m+q;
                p+=q;

            }
            else
            {
                break;
            }
        }
           cout<<p<<endl;
     }

    return 0;
}
