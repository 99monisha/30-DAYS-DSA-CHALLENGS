#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
int solveSum(int a,int b){
    return a+b;
}
int main(){
    int num1,num2,sum;
    cout<<"enter two number"<<endl;
    cin>>num1>>num2;
    sum=solveSum(num1,num2);
    cout<<sum;
    return 0;
}

