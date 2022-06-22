#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
char arr[1001][1001]; 
char f[1001][1001]; 
int main() {
    int a;
     cin >> a;
    for (int g=0;g<a; g++)
    {
        int b,c;
        cin>>b>>c;
        for (int g=0;g<b; g++)
            {
            for (int y=0;y<c; y++)
                {
                cin >> arr[g][y]; 
            }
        }
        int d,e;
        cin>>d>>e;
        for (int g=0;g<d; g++)
            {
            for (int y=0;y<e; y++)
                {
                cin >> f[g][y]; 
            }
        }
        if (d>b || e>c)
            {
            cout << "NO" << '\n'; 
            continue; 
        }
        int r=0; 
        for (int z=0;z<=b-d; z++)
            {
            for (int zz=0; zz<=c-e; zz++)
                {
                    int c=0; 
                for (int l=z; l<z+d; l++)
                    {
                    for (int ll=zz; ll<zz+e; ll++)
                        {
                        if (f[l-z][ll-zz]!=arr[l][ll])
                         {
                            c=1; break;    
                        }
                    }if (c==1)break; 
                }
                 if (c==0) 
                 {
                    r=1; 
                    break;}
            }
            if (r==1) 
            break; 
        }
        if (r)
         cout << "YES" << endl; 
        else 
        cout << "NO" << endl;
    }
    return 0;
}