// Sort 0s, 1s and 2s
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int v = 1 , temp = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i+v];
                arr[i+v] = temp;
            }
        }
    }
    printf("Output : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
        printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        printf("%d ",arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
        {
        printf("%d ",arr[i]);
        }
    }

    return 0;
}