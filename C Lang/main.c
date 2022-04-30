#include <stdio.h>
void main ()
{
printf("Welcome ! \n");
printf("The Menu \n");
printf("1-Print the Sum of 2 numbers \n");
printf("2-Print the Difference of 2 numbers \n");
printf("3-Print the Product of 2 numbers \n");
printf("4-Print the Quotient of 2 numbers \n");
printf("5-Print the Remainder of 2 numbers \n");
printf("6-Check if one number is larger or smaller than or equal to the other number \n");
printf("7-Exit \n");
int i=1,ch,a,b;/*Initialise variables*/
while(i>0)
{
    printf("Enter the choice \n");/*Entering the choice*/ 
    scanf("%d",&ch);
    if(ch==1)
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b); /*Entering the 2 numbers to be operated on*/
        a+=b; /* Stores the value of a as a+b */
        printf("The Sum is: %d \n",a);
    }
    else if(ch==2)
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b);/*Entering the 2 numbers to be operated on*/
        a-=b;/* Stores the value of a as a-b */
        printf("The Difference is: %d \n",a);
    }
    else if(ch==3)
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b);/*Entering the 2 numbers to be operated on*/
        a*=b;/* Stores the value of a as a times b or a*b */
        printf("The Product is: %d \n",a);
    }
    else if(ch==4)
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b);/*Entering the 2 numbers to be operated on*/
        a/=b;/* Stores the value of a as quotient of a divided by b or a/b */
        printf("The Quotient is: %d \n",a);
    }
    else if(ch==5)
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b);/*Entering the 2 numbers to be operated on*/
        a%=b;/* Stores the value of a as remainder of when a is divided by b or a%b */
        printf("The Remainder is: %d \n",a);  
    }
    else if(ch==6) /* Basic Greater than(>) , Lesser than(<) and Equals to(==) comparisions are done here*/
    {
        printf("Enter the 2 numbers \n");
        scanf("%d %d",&a,&b);/*Entering the 2 numbers to be compared*/
        if(a>b)
            printf("%d is Greater than %d \n",a,b);
        else if(a<b)
            printf("%d is Less than %d \n",a,b);
        else
            printf("%d is EquaL TO %d \n",a,b);
    }
    else if(ch==7)
    {
        break;
    }
    else
    {/* Breaks the loop when choice that is not mentioned above is entered */
        printf("Invalid Choice");
        break;
    }
    
}
}
