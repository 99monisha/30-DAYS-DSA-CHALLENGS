    #include<bits/stdc++.h>
     using namespace std;
       int main() {
  
           int t;
           cin>>t;
           while(t--)
        {
               char ar[10001],br[10001];
               cin>>ar;
               int n=strlen(ar);
        int j=n-2;
               int i;
               for(i=1;i<n;i++,j--)
                   {
                       int a=abs(ar[i]-ar[i-1]);
                       int b=abs(ar[j]-ar[j+1]);
                   if(a!=b)
                {
                cout<<"Not Funny\n";
                break;
            }
        }
 if(i==n)
         cout<<"Funny\n";
        }


    return 0;
}