#include<iostream>
using namespace std;
int main(){
    int a=0,b=0;
    double c=0;
    cin>>a>>b;

    while(a--){
        cin>>c;
        if(c<b) printf("On Sale! %.1lf\n",c);
    }
    return 0;
}