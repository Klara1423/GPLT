#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=0;
    char b=0;
    string s;

    cin>>a>>b;
    getchar();
    getline(cin,s);

    if(s.size()>a){
        for(int i=s.size()-a;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }else{
        for(int i=0;i<a-s.size();i++){
            cout<<b;
        }
        cout<<s<<endl;
    }

    return 0;
}