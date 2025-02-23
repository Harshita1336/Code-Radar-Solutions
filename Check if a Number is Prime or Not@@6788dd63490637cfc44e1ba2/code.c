// Your code here...
#include<stdio.h>
int main(){
    int a,p,i;
    scanf("%d",&a);

    if (a<=1){
    printf("Not Prime");
    return 0;
    }
    for (i=2;i*i<=a;i++)[
        if (a%i==0){
            p = 1;
            break;
        }
    ]
    if (p == 0)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}