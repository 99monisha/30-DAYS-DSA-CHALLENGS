/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(y1>y2)
    {
        cout<<"10000";
    }
else if(y1==y2)
{
     if(m1>m2)
     {
        cout<<500*(m1-m2);
     }
     else if(m1=m2){
        if(d1>d2)
        {
            cout<<15*(d1-d2);
        }
        else
        {
         cout<<"0";
        }

     }
     else
     {
        cout<<"0";
     }
}
else{
    cout<<"0";
}
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int d,m,y,b,n,p;
    cin>>b>>n>>p;
    cin>>d>>m>>y;
    if(p>y)
    {
        cout<<10000<<endl;
    }
    else if((y==p)&&(n>m))
    {
        cout<<500*(n-m)<<endl;
    }
    else if((b<=m)&&(n<=m)&&(p<=y)||(p<y)||(n<m)&&(p<=y))
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<15*(b-d)<<endl;
    }
    return 0;
}