#include <stdio.h>

int main(int argc, char const *argv[])
{
    int source[5]={8,1,6,4,2};
    int tmp;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(source[j]>source[j+1])
            {
                tmp=source[j];
                source[j]=source[j+1];
                source[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",source[i]);
    }
    printf("\n");
    return 0;
}


