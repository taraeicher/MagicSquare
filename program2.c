#include <stdio.h>

/*Program Description: Takes in the whole numbers 1-16 in any orders and prints them in four rows. Prints the rows, takes the sum of the rows, columns,
 *   and diagonals and prints them. Notifies user if a magic square has been achieved.
 *Programmer Name: Tara Eicher
 *WSU ID: z847x563
 *E-mail: tdeicher@wsu.edu
 *Date: 9/10/12
*/

   //Holds each integer the user enters in the order the user enters it.

   int one_1=0, one_2=0, one_3=0, one_4=0, two_1=0, two_2=0, two_3=0, two_4=0, three_1=0, three_2=0, three_3=0, three_4=0, four_1=0, four_2=0, four_3=0, four_4=0;

   //Holds sums of rows from top (row1) to bottom (row4).

   int sum_row1=0, sum_row2=0, sum_row3=0, sum_row4=0;

   //Holds sums of columns from left (col1) to right (col4).

   int sum_col1=0, sum_col2=0, sum_col3=0, sum_col4=0;

   //Holds sums of diagonals. diag1 is upper-left to lower-right. diag2 is upper-right to lower left.

   int sum_diag1=0, sum_diag2=0;

int main(void)
{

   //Prompt the user to enter the numbers and bring them in.   

   printf("Enter the whole numbers from 1 to 16, inclusive, in any order. Separate only by spaces, not commas.\n");
   scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &one_1, &one_2, &one_3, &one_4, &two_1, &two_2, &two_3, &two_4, &three_1, &three_2, &three_3, &three_4, &four_1, &four_2, &four_3, &four_4);
 
   //Print the numbers the user entered in four rows and four columns.

   printf("\n\n%-2d\t%-2d\t%-2d\t%-2d\n\n",one_1,one_2,one_3,one_4);
   printf("%-2d\t%-2d\t%-2d\t%-2d\n\n", two_1, two_2, two_3, two_4);
   printf("%-2d\t%-2d\t%-2d\t%-2d\n\n", three_1, three_2, three_3, three_4);
   printf("%-2d\t%-2d\t%-2d\t%-2d", four_1, four_2, four_3, four_4);

   //Find the sum of each row from top to bottom.

   sum_row1=one_1+one_2+one_3+one_4; 
   sum_row2=two_1+two_2+two_3+two_4;
   sum_row3=three_1+three_2+three_3+three_4;
   sum_row4=four_1+four_2+four_3+four_4;

   //Find the sum of each column from left to right.

   sum_col1=one_1+two_1+three_1+four_1;
   sum_col2=one_2+two_2+three_2+four_2;
   sum_col3=one_3+two_3+three_3+four_3;
   sum_col4=one_4+two_4+three_4+four_4;

   //Find the sum of each diagonal.

   sum_diag1=one_1+two_2+three_3+four_4;
   sum_diag2=one_4+two_3+three_2+four_1;

   //Print the sums.

   printf("\n\nSum of each row (top to bottom): %d %d %d %d\n", sum_row1, sum_row2, sum_row3, sum_row4);
   printf("Sum of each column (left to right): %d %d %d %d\n", sum_col1, sum_col2, sum_col3, sum_col4);
   printf("Sum of diagonal upper-left to lower-right: %d\n", sum_diag1);
   printf("Sum of diagonal upper-right to lower-left: %d\n", sum_diag2);

   //If the user has a magic square, notify them.

   if((sum_row1==sum_row2)&&(sum_row2==sum_row3)&&(sum_row3==sum_row4)&&(sum_row4==sum_col1)&&(sum_col1==sum_col2)&&(sum_col2==sum_col3)&&(sum_col3==sum_col4)&&(sum_col4==sum_diag1)&&(sum_diag1==sum_diag2))
   {
      printf("\n*****Congratulations! You have a magic square!*****\n");
   }

   //Terminate the program.

   return(0);
}
