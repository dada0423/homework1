#include <stdio.h>
int main(void)
{
    int i=1,j=1;
    
    while(i<10)
    {
        while(j<10)
        {
            printf("%dX%d=%d\t",i,j,i*j);
            j++;
            if(j==10)
            {
                i++;
                j=1;
                break;
            }
        }
        printf("\n");
    }
}
