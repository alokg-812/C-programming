#include<stdio.h>
int main(){
    int x=90;
    int* ptr = &x;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
}