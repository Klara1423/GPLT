#include<iostream>
using namespace std;
struct stu{
    char id[16];
    int x;
    int y;
}b[1000];

int main(){
    int n=0,m=0;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i].id;
        getchar();
        cin>>b[i].x>>b[i].y;
    }
    cin>>m;

    for(int i=0,a=0;i<m;i++){
        cin>>a;
        for(int j=0;j<n;j++){
            if(a==b[j].x){
                cout<<b[j].id<<" "<<b[j].y<<endl;
            }
        }
    }    
    return 0;
}
