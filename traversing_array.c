// #include <stdio.h>
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     int n;
//     printf("enter the number you want to search - ");
//     scanf("%d",&n);
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i]==n)
//         {
//             printf("yes the %d is present at %d position.",n,i+1);
//         }
        
//     }
    
//     return 0;
// }

#include <stdio.h>
int linearsearch(int arr[],int size,int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            return i+1;
        }
        
        
    }
return 0;
}
int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=(low+high)/2;
    if (arr[mid]==element)
    {
        return mid+1;
    }
    if (arr[mid]>element)
    {
        high = mid - 1;

    }
    else
    low = mid + 1;
    }
    return -1;
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int n=4;
    int searchindez=binarysearch(arr,size,n);
    printf("the element %d is present at %d position.",n,searchindez);

    return 0;
}