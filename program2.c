#include<stdio.h>

int main(){

int grade,count=0,passcount=0, maxcount=0, failcount=0,maxgrade=0;
float perpass,permax,perfail;
while(1){
printf("Please input the grade\n");
scanf("%d",&grade);

if(grade==-1){
    break;
    }
if(grade<=-2 || grade>=21){
    printf("The grade range can be from 0 to 20\n\
    Please Enter a correct Grade\n");
    scanf("%d",&grade);
    }
    count+=1;
if(grade>=10){
    passcount+=1;
    printf("Passing grade\n");
    if(grade>maxgrade){
    maxgrade=grade;
    maxcount=1;
    } else if (grade==maxgrade){
        maxcount++;
    }
    } else{
if(grade!=-1 && grade>=0){
    failcount+=1;
    printf("Fail grade\n");
    }
    }

}
perpass=((float)passcount/count)*100;
perfail=((float)failcount/count)*100;
permax=((float)maxcount/passcount)*100;
printf("The number of entered grades is %d\n\
The number of Passed students is %d\nPass percentage is %4.1f%% \n\
The number of Failed students is %d\nFail percentage is %4.1f%% \n\
The number of students with the biggest score(%d) is %d \n\
and the percentage is %4.1f%% of the students that passed\n", count, passcount, perpass,failcount, perfail,maxgrade, maxcount,permax);


system("pause");
}

