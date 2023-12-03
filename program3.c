#include<stdio.h>
#define SIZE 10
void sortTheArrays(int scores[SIZE], int regNos[SIZE]){
    int i,k,temp,temp1;
for(i=0;i<SIZE-1;i++){
    for(k=i+1;k<SIZE;k++){
        if (scores[k]>scores[i]){
            temp=scores[i];
            scores[i]=scores[k];
            scores[k]=temp;
            temp1=regNos[i];
            regNos[i]=regNos[k];
            regNos[k]=temp1;
        }
        }
    }
    printf("Sorthed Arrays based on score:\n\
    %20s%20s\n","St_ID","Score");
    for(i=0;i<SIZE;i++){
        printf("%20d %20d\n",regNos[i],scores[i]);
    }
}


int main(){

int i,regNos[SIZE],scores[SIZE];
for(i=0;i<SIZE;i++){
 printf("Input the registration Number of the student: \n");
 scanf("%d",&regNos[i]);
 printf("Input the score of the student: \n");
 scanf("%d",&scores[i]);
}
sortTheArrays(scores, regNos);
system("pause");
}