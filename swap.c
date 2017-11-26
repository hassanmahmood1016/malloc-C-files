#include<stdio.h>





void swap(int a, int b,int c)  /* WRONG */

   {

       int temp;

       

       temp = a;

       a = b;

       b =temp ;

     printf("a= %ib= %ic= %i\n", a,b,c);

       




   }

   void swap1(int a, int b,int c)  /* WRONG */

   {

       int temp;

       

       temp=b;

       b=c;

       c=temp ;

       printf("a= %ib= %ic= %i\n", a,b,c);

   }

void main (void)




{

    

    int a, b, c;

    printf("Enter first number: ");

    scanf("%i", &a);                            //asking user to enter  a integar number for variable x

    printf("The first number is %d\n", a);




    printf("Enter second number: ");            //asking user to enter a integar number for variable y 

    scanf("%i", &b);

    printf("the second number is %d\n", b);

    printf("Enter second number: ");            //asking user to enter a integar number for variable y 

    scanf("%i", &c);

    printf("the second number is %d\n", c);

    int *pa,*pb,*pc;

    pa=&a;

    pb=&b;

    pc=&c;

    printf("a= %ib= %ic= %i\n", a,b,c);

    printf("pa= %p pb= %p pc= %p \n", pa,pb,pc);

     swap(a,b,c);

    printf("pa= %p pb= %p pc= %p \n", pa,pb,pc);

    swap1(b,a,c);

    printf("pa= %p pb= %p pc= %p \n", pa,pb,pc);

  }
