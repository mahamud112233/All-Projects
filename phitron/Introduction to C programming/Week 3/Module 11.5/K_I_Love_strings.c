#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int p = 1; p <= n; p++)
    {
        char a[51], b[51];
        scanf("%s %s", a, b);
        int lena=strlen(a);
        int lenb=strlen(b);
        int len=0;
        if(lena<=lenb)
        {
            len=lena;
        }
        else if(lena>lenb)
        {
            len=lenb;
        }

        char c[101];
        for (int i=0,j=0;j<len;i=i+2,j++)
        {
            c[i]=a[j];
            c[i+1]=b[j];
        }
        
        if(lena<lenb)
        {
            for(int i=len,j=len*2;i<=lenb;i++,j++)
            {
                c[j]=b[i];
            }
        }
        else if(lena>lenb)
        {
            for(int i=len,j=len*2;i<=lena;i++,j++)
            {
                c[j]=a[i];
            }
            
        }
        else
            {
                c[len*2]='\0';
            }
        printf("%s\n",c);
      
    }
    return 0;
}