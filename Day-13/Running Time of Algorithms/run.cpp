#include<bits/stdc++.h>
using namespace std;
 
    int inserSort(vector <int> a) 
    {
    int n = a.size();
    int count=0;
    for(int i=1;i<n;i++)
    {
        int c = a[i];
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>c)
            {
                a[j+1]=a[j];
                count++;
                if(j==0)
                    a[j]=c;
            }
            else
            {
                a[j+1]=c;
                j=-1;
            }
        }
    }
    return count;
}
int main() {
    vector <int> br;
    int len;
    cin >> len;
    for(int p=0; p<len; p++) {
        int temp;
        cin >> temp;
        br.push_back(temp); 
    }
    cout<<inserSort(br);
    return 0;
}


 