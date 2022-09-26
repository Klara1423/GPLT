#include<iostream>
using namespace std;
int main(){
    int m=0,n=0,num=0;
    int a=0,b=0,x=0,y=0,sum=0;
    int M[100005]={0},N[100005]={0};
    cin>>n>>m>>num;
    while(num--){
        cin>>a>>b;
        if(a) M[b]++;
        else N[b]++;
    }   

    for(int i=0;i<100005;i++){
        if(M[i]>0) y++;
        if(N[i]>0) x++; 
    }

    sum=(n-x)*(m-y);
    cout<<sum;
    return 0;
}

/*
L1-7 机工士姆斯塔迪奥 (20 分)
在 MMORPG《最终幻想14》的副本“乐欲之所瓯博讷修道院”里，BOSS 机工士姆斯塔迪奥将会接受玩家的挑战。

你需要处理这个副本其中的一个机制：N×M 大小的地图被拆分为了 N×M 个 1×1 的格子，BOSS 会选择若干行或/及若干列释放技能，玩家不能站在释放技能的方格上，否则就会被击中而失败。

给定 BOSS 所有释放技能的行或列信息，请你计算出最后有多少个格子是安全的。

输入格式:
输入第一行是三个整数 N,M,Q (1≤N×M≤10^5 ，0≤Q≤1000)，表示地图为 N 行 M 列大小以及选择的行/列数量。

接下来 Q 行，每行两个数 Ti,Ci​其中 Ti​=0 表示 BOSS选择的是一整行Ti=1 表示选择的是一整列，Ci为选择的行号/列号。行和列的编号均从 1 开始。

输出格式:
输出一个数，表示安全格子的数量。

输入样例:
5 5 3
0 2
0 4
1 3
输出样例:
12
*/