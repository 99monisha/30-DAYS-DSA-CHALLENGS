#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, count = 0, maxi = 0, team_count = 0;
    cin>>n>>m;
    string s[1000];
    for( int i = 0; i < n; i++ )  
      cin>>s[i];
    for( int i = 0; i < n; i++ )
        for( int j = i + 1; j < n; j++ )
        {
            team_count = 0;
            for( int k = 0; k < m; k++ )
                if(  s[i][k] == '1' || s[j][k] == '1' )
                 team_count++;
           if( team_count == maxi )
           {
                count++;
                continue;
            }
            
            if( team_count > maxi )
            {
                maxi = team_count;
                count = 1;
            }
            
        }
    cout<<maxi<<endl<<count<<endl;
    return 0;
}