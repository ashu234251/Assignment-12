// 8. Write a recursive function to print binary of a given decimal number

 #include<stdio.h>

 void binary(int);

 int main()
 {
    int n;
    printf("Enter a Decimal Number: ");
    scanf("%d",&n);
    printf("Binary Number of %d is: ",n);
    binary(n);
 }

 void binary(int N)
 {
   if(N>0)
   { 
     binary(N/2);
     printf("%d",N%2);
   }
 }