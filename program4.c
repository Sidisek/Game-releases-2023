#include<stdio.h>>
#define SIZE 6

void fillData(int r1[SIZE],int r2[SIZE],int r3[SIZE]){
int i;
for(i=0;i<7;i++){
    printf("Enter the receits for the first store day %d\n",(1+i));
    scanf("%d",&r1[i] );
    
}
for(i=0;i<7;i++){
    printf("Enter the receits for the second store day %d\n",(1+i));
    scanf("%d",&r2[i] );
    
}
for(i=0;i<7;i++){
    printf("Enter the receits for the third store day %d\n",(1+i));
    scanf("%d",&r3[i] );
    
}

}

void Calculate(int r1[SIZE],int r2[SIZE],int r3[SIZE], int total[SIZE]){
int i;
for(i=0;i<7;i++){
    total[i]=r1[i]+r2[i]+r3[i]; 
}

}

void print(int total[SIZE]){
    int i;
    for(i=0;i<7;i++){
        printf("Total for day %d is %d\n",(i+1),total[i]);
    }
}


int main(){

int r1[SIZE],r2[SIZE],r3[SIZE], total[SIZE];
fillData(r1,r2,r3);
Calculate(r1,r2,r3,total);
print(total);
system("pause");
return 0;
}