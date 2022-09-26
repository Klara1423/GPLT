#include<iostream>
#include<string>
using namespace std;

int main(){
    int n=0,m=0,sum=0;
    string s;
    cin>>n>>m;
    getchar();

    
    for(int i=0;i<n;i++){
        getline(cin,s);
       
        if(s.find("qiandao")==-1&&s.find("easy")==-1) sum++;
        
        if(sum-1==m){
            cout<<s;
            return 0;
        }
    }
    cout<<"Wo AK le";
    return 0;
}