#include<stdio.h>
int main()
{
    int a=10;
    printf("%d\n",a);
    printf("%p\n",&a);//pointer spacifier %p
    
    int* pointer;
    pointer=&a;
    printf("%p\n",pointer);
    //dereferencing a pointer(pointer dia se variable er location a jay variable control kora)
    printf("%d",*pointer);
    return 0;
}