#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,like=0,people=5,day,l;
    cin>>day;
    for(i=0;i<day;i++){
        if(i!=0){
        people=(people/2)*3;
        }
        l=people/2;
        like=like+l;

    }
      cout<<like;
 return 0;
}