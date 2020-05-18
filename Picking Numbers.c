#include<stdio.h>
int main()
{
    int n,i,temp,max=0;
    int *input_array;
    scanf("%d",&n);
    input_array = (int*) calloc(100, sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        input_array[temp]++;
        temp=0;
    }
    for(i=0;i<n-1;i++)
    {
        if(input_array[i]+input_array[i+1]>max)
        {
            max=input_array[i]+input_array[i+1];
        }
    }
    printf("%d",max);
    free(input_array);
}
