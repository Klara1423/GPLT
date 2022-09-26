#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int fuc(char *str){
    for(int i=0;i<strlen(str);i++)
        if(!((int)str[i]>=48&&(int)str[i]<=57))
            return 0;
    return 1;
}

int main(){
    char a[1000],b[1000];//我也不想开这么大，主要是  -100 blabla bla...33  不好读入
    scanf("%s",a);
    getchar();
    gets(b);
    printf("%s\n",a);printf("%s\n",a);
    
    if(fuc(a)){
        if(atoi(a)<=1000) printf("%s",a);
        else printf("?");
    }else printf("?");

    printf(" + ");

    if(fuc(b)){
        if(atoi(b)<=1000)  printf("%s",b);
        else printf("?");
    }else printf("?");

    printf(" = ");
     
    if(fuc(a)&&fuc(b)&&atoi(a)<=1000&&atoi(b)<=1000) printf("%s",atoi(a)+atoi(b));
    else printf("?");

    return 0;
}