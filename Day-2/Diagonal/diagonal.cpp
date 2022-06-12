#include <iostream>
using namespace std;
int main() 
{
  int N, LeftSum = 0, RightSum = 0;
  cin >> N;
  int a[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> a[i][j];
      if (i == j) 
   {
        LeftSum+= a[i][j];
      }
    }
  }
  
  for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      RightSum+= a[i][j];
      break;
    }
  }
  cout << abs(LeftSum - RightSum) << endl;
  return 0;
}