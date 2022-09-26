#include<iostream>
using namespace std;
int main(){
    int a=0;
    char c=0;
    cin>>a>>c;

    for(int i=0;i<a/2.0;i++){
        for(int j=0;j<a;j++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}