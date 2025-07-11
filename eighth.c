#include <stdio.h>
int main(){

    int number=50;
    int*p;
    p=&number;
    printf("address the p variable %u\n",p);
    p=p+1;
    printf("after increment:address the p variable %u\n",p);
    return 0;

}