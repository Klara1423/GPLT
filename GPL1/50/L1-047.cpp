#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=0,a=0,b=0;
    string str;
    cin>>n;
    while(n--){
        cin>>str>>a>>b;
        if(!(a>=15&&a<=20&&b>=50&&b<=70)){
            cout<<str<<endl;
        }
    }
    return 0;
}