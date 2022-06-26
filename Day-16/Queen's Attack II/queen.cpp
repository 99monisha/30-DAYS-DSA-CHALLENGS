#include<bits/stdc++.h>
int n;
using namespace std;
map<pair<int,int>,int> q;

int dl(int papa,int babu){
    int ret=0;
    while(papa<n && babu>1){
        papa++;
        babu--;
        if(q[{papa,babu}]) 
        break;
        ret++;
    }
    return ret;
}
int up(int papa,int babu){
    int ret=0;
    while(papa>1){
        papa--;
        if(q[{papa,babu}]) 
        break;
        ret++;
    }
    return ret;
}

int dw(int papa,int babu){
    int ret=0;
    while(papa<n){
        papa++;
        if(q[{papa,babu}]) 
        break;
        ret++;
    }
    return ret;
}

int lf(int papa,int babu){
    int ret=0;
    while(babu>1){
        babu--;
        if(q[{papa,babu}]) 
        break;
        ret++;
    }
    return ret;
}

int rg(int papa,int babu){
    int ret=0;
    while(babu<n){
        babu++;
        if(q[{papa,babu}])
         break;
        ret++;
    }
    return ret;
}

int ur(int papa,int babu){
    int ret=0;
    while(papa>1 && babu<n){
        papa--;
        babu++;
        if(q[{papa,babu}])
         break;
        ret++;
    }
    return ret;
}

int ul(int papa,int babu){
    int ret=0;
    while(papa>1 && babu>1){
        papa--;
        babu--;
        if(q[{papa,babu}])
         break;
        ret++;
    }
    return ret;
}

int dr(int papa,int babu){
    int ret=0;
    while(papa<n && babu<n){
        papa++;
        babu++;
        if(q[{papa,babu}])
         break;
        ret++;
    }
    return ret;
}
int main(){

    int k;
    cin >> n >> k;
    int f;
    int g;
    cin >> f >> g;
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        q[{rObstacle,cObstacle}]=1;
    }
    
    cout<<up(f,g)+dw(f,g)+lf(f,g)+rg(f,g)+ur(f,g)+ul(f,g)+dl(f,g)+dr(f,g);
    return 0;
}