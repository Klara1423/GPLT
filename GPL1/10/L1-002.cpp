#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N=0,L=0,n=0;
    char c=0;

    cin>>N>>c;

    n=(int)(sqrt((N+1)/2));//半个所需行数
    L=N-(n*n*2-1);//没用掉的符号数
    
    for(int i=n;i>0;i--){//上
        for(int j=0;j<n-i;j++){//空格
            cout<<' ';
        }
        for(int j=2*i-1;j>0;j--){//*
            cout<<c;
        }
            cout<<endl;
    }
    
    for(int i=2;i<=n;i++){//下
        for(int j=n-i;j>0;j--){//空格
            cout<<' ';
        }
        for(int j=0;j<2*i-1;j++){//*
            cout<<c;
        }
        cout<<endl;
    }
    cout<<L;
    return 0;
}