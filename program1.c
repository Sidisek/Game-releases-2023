#include<stdio.h>
#include<math.h>
int getBin(int num)
{
 int a;

  while(num<0){
    printf("The number cannot be negative!\n Please enter a Binary number: \n");
    scanf("%d",&num);
  }
  while(num>0){
    a=num%10;
    if(a!=0 && a!=1){
      return 0;     
    }
    num/=10;    
  } 
  return 1; 
}
int main() {
  int num, rem,bin,i=0,decimal=0;
      printf(" Please enter a Binary number\n");
      scanf("%d",&num);
  while(1){
  if(getBin(num)){
    printf("The number %d is Binary!\n\n", num);
    break;
  }
  else{
    printf("The number %d is not Binary!\n", num);
    printf(" Please enter a Binary number\n");
      scanf("%d",&num);
  }
  }
  for(i=0;num>0;i++) {
    rem=num%10;
    decimal+=rem*pow(2,i);
    num/=10;
  }
  printf("The Decimal equivalant of the Binary %d is %d\n", num, decimal);
system("pause");
}