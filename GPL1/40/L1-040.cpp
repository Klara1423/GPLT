#include<iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;

    while(a--){
        char ch=0;
        double b=0; 
        cin>>ch>>b;
        if(ch=='M'){
            printf("%.2lf\n",b/1.09);
        }else{
            printf("%.2lf\n",b*1.09);
        }    
    }
    return 0;
}