#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int w,p,R;
    cin>>p>>w>>R;
    
    int rots=min(w,p)/2;
    int m[w*p];
    int ro[150][1196];
    int i,x,y;
    int a,b;
    for(i=0;i<w*p;i++)
    cin>>m[i];
    for(a=0;a<rots;a++)
    {
        i=0;
        x=y=a;

        for(;y<p-a-1;y++)
        ro[a][i++]=m[w*y+x];

        for(;x<w-a-1;x++)
        ro[a][i++]=m[w*y+x];

        for(;y>a;y--)
        ro[a][i++]=m[w*y+x];

        for(;x>a;x--)
        ro[a][i++]=m[w*y+x];
    }
    for(a=0;a<rots;a++)
    {
        b=2*(w-2*a)+2*(p-2*a)-4;
        i=-R%b+b;
        x=y=a;

        for(;y<p-a-1;y++)
        m[w*y+x]=ro[a][i++%b];

        for(;x<w-a-1;x++)
        m[w*y+x]=ro[a][i++%b];

        for(;y>a;y--)
        m[w*y+x]=ro[a][i++%b];

        for(;x>a;x--)
        m[w*y+x]=ro[a][i++%b];
    }
    for(y=0;y<p;y++)
    {
        for(x=0;x<w;x++)
        {
            if(x)
            cout<<' ';
            cout<<m[w*y+x];
        }
        cout<<endl;
    }
    return 0;
}