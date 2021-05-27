//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
  //Declare all the variables[N, array a(1D array), i, sum=0] used in the code
  //Read the Value of array size N using scanf statement
  //Read the array elements using for loop and scanf statment
  // DO the addition of array elements and store the final result in variable sum
  //Print the sum of array elements which is stored in variable sum using printf statement
  int a[100];
  int i, n, sum=0;
  printf("Input the number of elements to be stored in the array :");
  scanf("%d",&n);
  printf("Input %d elements in the array :\n",n);
  for(i=0;i<n;i++)
  {
    printf("Element - %d :",i);
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    sum +=a[i];
  }
  printf("Sum of all elements stored in the array is :%d\n\n", sum);
  return 0;
}
