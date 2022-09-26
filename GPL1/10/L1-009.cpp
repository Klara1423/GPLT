#include<iostream>
#include<algorithm>
using namespace std;
int fuc(int a,int b){
    int c=0;
    for(c=min(a,b);c>=1;c--){
        if(a%c==0&&b%c==0){
            break;
        }
    }
    return c;
}

int main(){
    int a=0,b=0;
    int n=0,c=0,d=1;

    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d/%d",&a,&b);
        c=a*d+b*c;
        d=abs(d*b);

        if(c){
            int q=fuc(abs(c),d);
            c/=q;
            d/=q;  
        }
    }

    if(c==0){
        cout<<'0';
    }else if(abs(c)>d){
        if(abs(c)%d==0){
            cout<<c/d;
        }else{
            cout<<abs(c/d)<<" "<<c%d<<'/'<<d;
        }
    }else if(c==d){
        cout<<'1';
    }else{
        cout<<c<<'/'<<d;
    }

    return 0;
}