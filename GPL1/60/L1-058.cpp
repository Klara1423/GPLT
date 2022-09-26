#include<iostream>
#include<string>
using namespace std;
int main(){
    string str=0;
    getline(cin,str);
    for(int i=0,s=0;i<s;i++){
        if(str[i]=='6') s++;
        
        if(s>9) cout<<"27";
        else if(s>3) cout<<'9';
        else if(s>0){
            while(s--) cout<<'6';
        }
        cout<<str[i];

    }
    return 0;
}