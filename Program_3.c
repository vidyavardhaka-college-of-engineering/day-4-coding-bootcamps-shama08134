//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   int disp[5][5];
   int i, j;
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
     {
       printf("Enter value for disp[%d][%d] :",i,j);
       scanf("%d", &disp[i][j]);
     }
   }
   printf("Two Dimensional array elements :\n");
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
     {
       printf("%d ",disp[i][j]);
       if(j==5)
       {
         printf("\n ");
       }
     }

   }
  return 0;
}