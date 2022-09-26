#include<iostream>
using namespace std;
int main(){
    int n=0,b=1,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        b=1;
        for(int j=1;j<=i;j++){
            b*=j;
        }
        s+=b;
    }
    cout<<s;
    return 0;
}


// int fuc(int a){
//     if(a!=1) return a*fuc(a-1);
// }
// int main(){
//     int n=0,s=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         s+=fuc(i);
//     }
//     cout<<s;
//     return 0;
// }