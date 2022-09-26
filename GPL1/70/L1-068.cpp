#include<iostream>
using namespace std;
int main(){
    int n=0;
    double a=0,s=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=1/a;
    }
    s/=n;
    printf("%.2lf",1/s);
    return 0;
}