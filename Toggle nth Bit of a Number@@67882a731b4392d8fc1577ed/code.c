// Your code here...
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a = a^(1<<b);
    printf("%d\n",a);
    return 0;
}