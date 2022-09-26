#include<iostream>
using namespace std;
int main(){
    int a=0,b=0,c=0;
    cin>>a;
    b=a/100;
    c=a%100;
    
    if(a/10000>0){
        if(b<22) printf("%04d-%02d",b,c); 
        else printf("%04d-%02d",b,c);
    }else{
        if(b<22) printf("20%02d-%02d",b,c); 
        else printf("19%02d-%02d",b,c);
    }

    return 0;
}