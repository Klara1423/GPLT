#include<iostream>
using namespace std;
enum subject{ling,yi,er,san,si,wu,liu,qi,ba,jiu,len};

int main(){
    char b=0,k=0;
    char const *a[len]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    
    while(cin>>b&&b!=EOF){
        if(b=='-'){
            cout<<"fu";
            k++;
        } 
        else if(k==0){
            cout<<a[b-'0'];
            k++;
        }
        else{
            cout<<" "<<a[b-'0'];
            k++;
        }
    }
    return 0;
}