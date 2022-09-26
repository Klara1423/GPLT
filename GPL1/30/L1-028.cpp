#include<iostream>
#include<cmath>
using namespace std;
int Prime(int num){
    if(num==1)
        return 0;
    if(num==2||num==3)
        return 1;
    if(num %6!=1&&num%6!=5)
        return 0;
    int tmp =sqrt(num);
    for(int i=5;i<=tmp;i+=6 )
        if(num %i==0||num%(i+2)==0)
            return 0;
    return 1;
}
int main(){
    int n=0,num=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        if(Prime(num))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
