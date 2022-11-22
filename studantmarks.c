#include <stdio.h>

int main()
{
int a,b,c,d;
printf("enter yorr Mathematics marks :- ");
scanf("%d",&a);
printf("enter your Science marks :- ");
scanf("%d",&b);
printf("enter your English marks :- ");
scanf("%d",&c);
printf("enter your Gujarati marks :- ");
scanf("%d",&d);

//total
int t=a+b+c+d;
printf("your toter is %d",t);
//pardsanteg
float p = (float)t / 4;
printf("\nyour percentage is %.2f\n",p); 

if(p>=90 && p<=100)
{
    printf("your grade is A+");
}
else if (p>=80 && p<90){
    printf("your grade is A");
}
else if (p>=70 && p<80){
    printf("your grade is B");
}
else if (p>=60 && p<70){
    printf("your grade is C");
}
else if (p>=50 && p<60){
    printf("your grade is D");
}else if (p<100){
    printf("you are faild");
}
else{
    printf("you are faild");
}

return 0;

}