#include<iostream>
using namespace std;
int main(){
    int a=0,i=0;
    while(1){
        cin>>a;
        i++;
        if(a==250){
            cout<<i;
            break;
        }
    }
    return 0;
}