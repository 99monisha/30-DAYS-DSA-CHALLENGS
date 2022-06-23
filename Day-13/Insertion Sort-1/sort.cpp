#include<bits/stdc++.h>
using namespace std;
void sort(vector <int> a) {

    int s = *( a.end() - 1);
    int i ;
    for (i =a.size(); i > 1; --i) 
    {
        if(s < a[i-2]) 
        {
            a[i-1] = a[i-2];
            for (int j = 0; j < a.size(); ++j)
             {
                cout << a[j] << " ";
             }
            cout << endl;
        }
        else 
        {
            break;
        }
    }
        a[i-1] = s;
            for (int j = 0; j < a.size(); ++j) 
            {
                cout << a[j] << " ";
            }
            cout << endl;
}
int main() 
{
   vector <int> aa;
   int p;
cin >> p;
for(int q=0; q<p; q++) {
   int r;
   cin >> r;
  aa.push_back(r); 
}
sort(aa);
   return 0;
}
