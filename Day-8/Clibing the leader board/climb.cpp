#include<iostream>
using namespace std;
int main(){
    int m,n,i,level=0,score=0;
    cin>>n;
    int rank[n];
    for(i=0;i<n;i++){
        cin>>rank[level+1];
        if (rank[level+1]!=rank[level])
        level++;
        }
        cin>>m;
          for(i=0;i<m;i++){
            cin>>score;
            while(level && score>=rank[level])
            level--;
            cout<<level+1<<endl;
                      }
}