#include<stdio.h>
void add(int a,int b)
{ int c=a+b;
    printf("sum is %d",c);
}
void sub(int a,int b)
{
    int c=a-b;
    printf("Subtraction is %d",c);
}
void mult(int a,int b)
{
    int c=a*b;
    printf("multiplication is %d",c);
}
void div(int a,int b)
{
    int c=a/b;
    printf("division is %d",c);
}
int main()
{
    int ch,a,b;
      printf("hello\n");
    do
    {

    printf("\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("|||||||||   1.Add        ||||||||||\n");
    printf("|||||||||   2.Subtract   ||||||||||\n");
    printf("||||||||||  3.Divide     ||||||||||\n");
    printf("||||||||||  4.Multiply   ||||||||||\n");
     printf("|||||||||| 5.Exit  ||||||||||\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    scanf("%d",&ch);


    switch(ch)
    {
    case 1:
        printf("Enter number to Add separeted by space\n");
        scanf("%d %d",&a,&b);
        add(a,b);
        break;
    case 2:
         printf("Enter number to Subtract separeted by space\n");
        scanf("%d %d",&a,&b);
        sub(a,b);
        break;
    case 3:
         printf("Enter number to Divide separeted by space\n");
        scanf("%d %d",&a,&b);
        div(a,b);
        break;
    case 4:
         printf("Enter number to Multiply separeted by space\n");
        scanf("%d %d",&a,&b);
        mult(a,b);
        break;
    case 5:
        printf("Thankyou For using!!!");
        break;
    default:
        printf("Invalid input!!! Choose Right option\n");
        break;
    }
      }while(ch!=5);

return 0;
}
