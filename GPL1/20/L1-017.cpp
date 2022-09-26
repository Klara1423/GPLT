#include<iostream>
#include<string>
using namespace std;
int main(){
    double p=0,f=0;
    string str;
    getline(cin,str);
    
    for(int i=0;i<str.size();i++){
        if(str[i]=='2')f++;
    }
    
    if(str[0]=='-'){
        p=f/(str.size()-1);
        p*=1.5;
    }else{
        p=f/str.size(); 
    }
    if(str[str.size()-1]=='0'||str[str.size()-1]=='2'||str[str.size()-1]=='4'||str[str.size()-1]=='6'||str[str.size()-1]=='8') p*=2;
    
    printf("%.2lf%\n",p*100);
    return 0;
}