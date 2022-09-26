#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int a=0,b=0,j=1,sum=0;
    cin>>a>>b;

    for(int i=a;i<=b;i++,j++){
        sum+=i;
        printf("%5d",i);
        if(j%5==0) cout<<endl;
    }
    
    if((j-1)%5==0) cout<<"Sum = "<<sum;
    else cout<<endl<<"Sum = "<<sum;

    return 0;
}