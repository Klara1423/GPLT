#include<iostream>
#include<string>
using namespace std;
struct stu{
    int a;
    string str;
}s[50];
int main(){
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i].a>>s[i].str;
        getchar();
    }

    for(int i=0;i<n/2.0;i++){
        cout<<s[i].str;
        for(int j=n-1;j>=0;j--){
            if(s[j].a+s[i].a==1){
                cout<<' '<<s[j].str<<endl;
                s[j].a=2;
                break;
            
            }
        }
    }
    
    return 0;
}