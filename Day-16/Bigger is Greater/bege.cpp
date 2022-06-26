#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t,i,j,k,l,n,p,small=0;
    char s[100],a[100],temp;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        n=strlen(s);
        p=0;
        for(j=n-1;j>0;j--)
        {
            if(s[j]>s[j-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
        cout<<"no answer"<<endl;
        else
        {
            for(k=j,l=0;s[k]!='\0';k++,l++)
            {
                a[l]=s[k];
            }
            a[l]='\0';
            small=0;
            for(l=1;a[l]!='\0';l++)
            {
                if(a[small]>a[l])
                {
                    if(a[l]>s[j-1])
                    small=l;
                }
            }
            temp=s[j-1];
            s[j-1]=a[small];
            s[j]='\0';
            a[small]=temp;
            n=strlen(a);
            for(k=0;k<n-1;k++)
            {
                for(l=0;l<n-1-k;l++)
                {
                    if(a[l]>a[l+1]);
                    {
                        temp=a[l];
                        a[l]=a[l+1];
                        a[l+1]=temp;
                    }
                }
            }
            cout<<s<<a<<endl;
        }
    }

    return 0;
}


/*
using namespace std;
string s;
int main() {
    int tem;
    scanf("%d", &tem);
    while (tem--) {
        cin >> s;
        if (next_permutation(s.begin(), s.end())) 
        printf("%s\n", s.c_str());
        else printf("no answer\n");
    }
    return 0;
}
*/