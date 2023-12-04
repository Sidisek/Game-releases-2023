#include<stdio.h>
#include<math.h>
int getBin(int num)
{
 int a;

  while(num<0){ //cannot be negative
    printf("The number cannot be negative!\n Please enter a Binary number: \n");
    scanf("%d",&num);
  }
  while(num>0){ //loop until number is not zero  
    a=num%10; //find the mod (last digit)
    if(a!=0 && a!=1){ //the remainder needs to be 1 or 0 in order to be binary
      return 0; //return if not binary    
    }
    num/=10;   // divide by 10 in order to go to the next digit 
  } 
  return 1;  // return if binary
}
int main() {
  int num, rem,bin,i=0,decimal=0;
      printf(" Please enter a Binary number\n");
      scanf("%d",&num);
  while(1){ //forever loop
  if(getBin(num)){// chacks if 1 or 0 from function
    printf("The number %d is Binary!\n\n", num);
    break; //stops loop ONLY if it satisfies the condition
  }
  else{ //if its not binary, repeat
    printf("The number %d is not Binary!\n", num);
    printf(" Please enter a Binary number\n");
      scanf("%d",&num);
  }
  }
  for(i=0;num>0;i++) {// conversion to decimal
    rem=num%10; //find the last digit and
    decimal+=rem*pow(2,i); // multiply by 2 in the power of i
    num/=10; // next digit
  }
  printf("The Decimal equivalant of the Binary %d is %d\n", num, decimal);
system("pause");
}
