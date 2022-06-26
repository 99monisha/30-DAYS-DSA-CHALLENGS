#include<bits/stdc++.h>
using namespace std;

void sortLoop(int s, int * a) {    
    int i,j;
    int v;
    for(i=1;i<s;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0 && v<a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=v;        
    }
   for(j=0;j<s;j++)
        {
            cout<<a[j];
            cout<<" ";
        }
}
int main(void) {
   int aa;
cin>>aa;
int p[aa], aa1;
for(aa1 = 0; aa1 < aa; aa1++) { 
   cin>>p[aa1]; 
}
sortLoop(aa, p);
   
   return 0;
}

