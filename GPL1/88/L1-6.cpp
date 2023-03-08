#include<iostream>
#include<string>
using namespace std;
char max(char a,char b){
    char c;
    if(a-'0'>b-'0') c=a;
    else c=b;
    return c;
}
int main(){
    string s,a,b,m;
    cin>>a>>b;

    for (int i=1;i<a.size();i++){
        if ((a[i]-'0')%2==(a[i-1]-'0')%2){
            s+=max(a[i],a[i-1]);
        }
    }

    for (int i=1;i<b.size();i++){
        if ((b[i]-'0')%2==(b[i-1]-'0')%2){
            m+=max(b[i],b[i-1]);
        }
    }
    
    if(s==m) cout<<s<<endl;
    else cout<<s<<endl<<m<<endl;
    return 0;
}
/*
L1-6 斯德哥尔摩火车上的题 (15 分)
tt.png

上图是新浪微博上的一则趣闻，是瑞典斯德哥尔摩火车上的一道题，看上去是段伪代码：

s = ''
a = '1112031584'
for (i = 1; i < length(a); i++) {
  if (a[i] % 2 == a[i-1] % 2) {
    s += max(a[i], a[i-1])
  }
}
goto_url('www.multisoft.se/' + s)
其中字符串的 + 操作是连接两个字符串的意思。所以这道题其实是让大家访问网站 www.multisoft.se/112358（注意：比赛中千万不要访问这个网址！！！）。

当然，能通过上述算法得到 112358 的原始字符串 a 是不唯一的。本题就请你判断，两个给定的原始字符串，能否通过上述算法得到相同的输出？

输入格式：
输入为两行仅由数字组成的非空字符串，长度均不超过 10 
4
 ，以回车结束。

输出格式：
对两个字符串分别采用上述斯德哥尔摩火车上的算法进行处理。如果两个结果是一样的，则在一行中输出那个结果；否则分别输出各自对应的处理结果，每个占一行。题目保证输出结果不为空。

输入样例 1：
1112031584
011102315849
输出样例 1：
112358
输入样例 2：
111203158412334
12341112031584
输出样例 2：
1123583
112358
*/