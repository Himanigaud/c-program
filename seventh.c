#include <stdio.h>
int main(){
    int number=50;
    int*p;
    int**p2;
    p=&number;
    p2=&p;
    printf("address the number variable %x\n",&number);
    printf("address the p variable %x\n",p);
    printf("value of*p variable %d\n",p);
    printf("address the p2 variable %x\n",p);
    printf("value of**p2 variable %d|d\n",p);
    return 0;

}