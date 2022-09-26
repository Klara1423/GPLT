#include<iostream>
using namespace std;
int main(){
    double a=0,b=0,c=0,d=0;
    cin>>a>>b>>c;
    if(b){
        d=a*1.26;
    }else{
        d=a*2.455;
    }

    if(d/c>1)printf("%.2lf T_T",d);
    else printf("%.2lf ^_^",d);

    return 0;
}