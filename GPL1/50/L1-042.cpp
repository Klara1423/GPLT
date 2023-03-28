#include <iostream>
using namespace std;
int main()
{
    int mm = 0, dd = 0, yyyy = 0;
    scanf("%d-%d-%d", &mm, &dd, &yyyy);
    printf("%04d-%02d-%02d", yyyy, mm, dd);
    return 0;
}