#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    char a;
    int b[10]={0};
    while(scanf("%c",&a)!=EOF){
        b[a-'0']++;
    }
    for(int i=0;i<10;i++){
        if(b[i]!=0){
            cout<<i<<':'<<b[i]<<endl;
        }
    }
    return 0;
}