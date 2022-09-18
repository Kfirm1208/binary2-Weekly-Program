#include <stdio.h>
int binary2(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The binaly is %c");
    binary2(num);
    return 0;
}
int binary2(int n)
{
  if(n==0 || n==1){
    printf("%d",n);
    return ;
   }
    binary2(n / 2);
    binary2(n % 2);
}

