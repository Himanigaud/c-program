#include <stdio.h>
void getarray(int arr[])
{
    printf("Elements of array are");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);

    }
}
    int main()
    {
      int arr[5]= {42,68,70,89,65};
      getarray(arr);
      return 0;

    }







