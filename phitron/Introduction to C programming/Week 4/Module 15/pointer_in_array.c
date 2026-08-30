#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("Index 0 address: %p\n",&a[0]);
    printf("Index 1 address: %p\n",&a[1]);
    printf("Index 2 address: %p\n",&a[2]);
    printf("Index 3 address: %p\n",&a[3]);
    printf("Index 4 address: %p\n",&a[4]);
    // arrar is a pointer,let's prove:
    printf("Array adress: %p\n",&a);
    // we can control the value of array with dereference.
    *a=50;
    *(a+1)=40;
    *(a+2)=30;
    *(a+3)=20;
    *(a+4)=10;
    for(int i=0;i<5;i++)
    {
        printf("Index %d value= %d\n",i,a[i]);
    }
    return 0;
}