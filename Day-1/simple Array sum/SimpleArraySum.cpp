//Time Complexity: O(n)
//Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int size){
    int sum=0;
    for( int i =0;i<size;i++)

sum+=arr[i];
return sum;
    }

int main(){
int arr[]={0,7,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<sum(arr,size);
return 0;
}
