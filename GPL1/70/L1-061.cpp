#include<iostream>
using namespace std;
int main(){
    double a=0,b=0,s=0;
    cin>>a>>b;
    s=a/(b*b);
    printf("%.1lf\n",s);
    if(s>25)cout<<"PANG";
    else cout<<"Hai Xing";
    
    return 0;
}