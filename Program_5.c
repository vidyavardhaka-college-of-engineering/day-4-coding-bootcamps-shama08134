//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,large, small;
    printf("\n Enter the number of elements :");
    scanf("%d", &n);
    printf("\n Input the array elements :");
    

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        large=small=arr[0];
        for(i=1;i<n;++i)
        {
          if(arr[i]>large)
          large=arr[i];
          if(arr[i]<small)
          small=arr[i];
        }
        printf("\n The smallest element is %d\n",small);
        printf("\n The largest number element is %d\n", large);

    //Write your code here
  
    return 0;
}
