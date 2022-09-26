#include<iostream>
using namespace std;
int main(){
    int  a=0,w=0,h=0,s=0;
    cin>>s;
    while(s--){
        cin>>a;
        if(a){
            cin>>h;
            if(h>130) cout<<"ni li hai! ";
            else if(h==130) cout<<"wan mei! ";
            else cout<<"duo chi yu! ";
            cin>>w;
            if(w>27) cout<<"shao chi rou!";
            else if(w==27) cout<<"wan mei!";
            else cout<<"duo chi rou!";
            cout<<endl;
        }else{
            cin>>h;
            if(h>129) cout<<"ni li hai! ";
            else if(h==129) cout<<"wan mei! ";
            else cout<<"duo chi yu! ";
            cin>>w;
            if(w>25) cout<<"shao chi rou!";
            else if(w==25) cout<<"wan mei!";
            else cout<<"duo chi rou!";
            cout<<endl;
        }

    }
    return 0;
}