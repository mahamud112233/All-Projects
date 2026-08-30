#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
   if(N<=1000)
   {
    printf("Bad luck!");
   }
   else if(1000<N&&N<1500)
   {
    printf("I will buy Punjabi");
   }
   else
   {
    printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
   }
    return 0;
}