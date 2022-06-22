#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int start=1,end=3,value=3,time;
    cin>>time;
    while(1)
    {
        if(start<=time && time<=end)
        {
            time=time-start;
            cout<<(value-time);
            break;
            
        }
        start=end+1;
        value=2*value;
        end=value+end;
    }

    return 0;
}