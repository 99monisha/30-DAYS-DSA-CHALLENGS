
#include <algorithm>
#include <string.h>
#include <vector>
#include <cstdio>
#include <climits>
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
        scanf("%lld", &arr[i]);
        ToatalSum+= arr[i];
    }

    for (int i=1; i<=N; i++)
    {
        lld cur = ToatalSum- arr[i];
        MIN = min(MIN, cur);
        MAX = max(MAX, cur);
    }

    printf("%lld %lld\n", MIN, MAX);
}