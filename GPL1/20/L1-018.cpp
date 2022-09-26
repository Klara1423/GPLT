#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    string str={"Dang"};
    int hh=0,mm=0;

    scanf("%d:%d",&hh,&mm);
    if(hh>=0&&hh<=12){
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
    }else{
        for(int i=0;i<hh-12;i++){
            cout<<str;
        }
    
    if(mm>0) cout<<str;
    }
    return 0;
}