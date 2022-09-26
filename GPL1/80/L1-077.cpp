#include<iostream>
using namespace std;
int main(){
    int h[24],a=0;
    for(int i=0;i<24;i++){
        cin>>h[i];
    }
    
    while(cin>>a&&a>=0&&a<24){
        cout<<h[a];
        if(h[a]>50)cout<<" Yes";
        else cout<<" No";
        cout<<endl;
    }
    return 0;
}