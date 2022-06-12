
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long lld;

lld arr[6], N = 5;

int main ()
{

    lld ToatalSum= 0;
    lld MIN = LLONG_MAX, MAX = LLONG_MIN;

    for (int i=1; i<=N; i++)
    {
       cin>>arr[i];
        ToatalSum+= arr[i];
    }

    for (int i=1; i<=N; i++)
    {
        lld cur = ToatalSum- arr[i];
        MIN = min(MIN, cur);
        MAX = max(MAX, cur);
    }

    cout<<MIN<<MAX;
}
