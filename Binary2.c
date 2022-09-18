#include <stdio.h>
int binaly2(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The binaly is %c");
    binaly2(num);
    return 0;
}
int binaly2(int n)
{
  if(n==0 || n==1){
    printf("%d",n);
    return ;
   }
    binaly2(n / 2);
    binaly2(n % 2);
}

