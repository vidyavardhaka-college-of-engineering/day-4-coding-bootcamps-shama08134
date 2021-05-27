//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a & array b, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   //Print the both array elements in using printf statement in the above specified format
   int arr1[100], arr2[100];
   int i, n;
   printf("\n\nCopy the elements one array into another array :\n");
   printf("----------------------------------------------------\n");
   printf("Input the number of elements to be stored in the array :");
   scanf("%d",&n);
   printf("Input %d elements in the array :\n",n);
   for(i=0;i<n;i++)
   {
     printf("element - %d : ",i);
     scanf("%d",&arr1[i]);
   } 
   for(i=0;i<=n;i++)
   {
     arr2[i]=arr1[i];
   }
   printf("\n The elements stored in first array are :\n");
   for(i=0;i<n;i++)
   {
     printf("%5d", arr1[i]);
   }
   printf("\n\n The elements copied into the second array are :\n");
   for(i=0;i<n;i++)
   {
     printf("%5d", arr2[i]);
   }
   printf("\n\n");
   return 0;
}
