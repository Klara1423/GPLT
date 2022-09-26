#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,m={"10X98765432"};
    int q[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int n=0,z=0,f=0;
    cin>>n;

    for(int k=0;k<n;k++){
        cin>>str;
        z=0;
        for(int i=0;i<17;i++){
            z+=q[i]*(str[i]-'0');
        }
        if(m[z%11]==str[17]) f++;
        else cout<<str<<endl;
    }
    if(n==f) cout<<"All passed";

    return 0;
}