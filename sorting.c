     #include<stdio.h>
void main(){
int i,j,temp;

    int a[10]= {10,9,7,101,23,44,12,78,24,33};
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("printing sorted element list...\n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}



        

    

