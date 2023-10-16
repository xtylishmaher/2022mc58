/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  16/10/23
  Purpose       :  Task 9_2 to get know about the loops
                    and print the square cube  of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void square_qube(int);
void main()
{
    int a=0;
    printf("enter a number >>");
    scanf("%d",&a);
    square_qube(a);
}
void square_qube(int d)
{
    int c=1,f=1,g=1;
            printf("Number\tSquare\t Qube \n");

    while (c<d+1)
    {
        f=c*c;
        g=c*f;
        printf("%d\t%d\t%d\n",c,f,g);
        c++;
    }
}