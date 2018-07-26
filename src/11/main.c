#include <stdio.h>

int main(int argc, char const *argv[])
{
    int source[]={8,1,6,4,2};//>=0 <=10 11 kind of results
    int result[11];

    for(int i=0;i<11;i++)
    {
        result[i]=0;
    }
    for(int i=0;i<5;i++)
    {
        result[source[i]]++;
    }
    for(int i=0;i<11;i++)
    {
        if(result[i]>0)
        {
            printf("%d\t",i);
        }
    }
    printf("\n");
    return 0;
}


