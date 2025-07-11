#include<stdio.h>
int main(){
    int number=50;
    int*p;
    p=&number;
    printf("address the value p variable %d\n1",p);
    printf("value of p variable %d\n",p);
    return 0;
}