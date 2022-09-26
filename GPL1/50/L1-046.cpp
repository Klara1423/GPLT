#include<iostream>
using namespace std;
int main(){
    int x=0,s=1,n=1;
    cin>>x;
    while(1){
        if(s<x){
            s=s*10+1;
            n++;
        }else break;
    }
    for(;1;n++){
        cout<<s/x;
        s%=x;
        if(s) s=s*10+1;
        else break;
    }
    cout<<' '<<n;
    return 0;
}
