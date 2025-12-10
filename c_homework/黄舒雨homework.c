#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a>c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b>c){
        temp = c;
        c = b;
        b = temp;
    }
    printf("%d,%d,%d",a,b,c);


    int x;
    scanf("%d",&x);
    if (x<0){
        x =0;
        
    }
   
    if (x>=10 && x<20){
        x=10;
    }
    if (x>=20 && x<40){
        x = -0.5*x + 20;
    }

    printf("%d",x);


    int y;
    scanf("%d", &y);

    int number_by3 = (y % 3 == 0);
    int number_by5 = (y % 5 == 0);
    int number_by7 = (y % 7 == 0);

    int count = number_by3 + number_by5 + number_by7;

    if (count == 3) {
        printf("能被3、5、7同时整除");
    }
    else if (count == 0) {
        printf("不能被3、5、7任意一个整除");
    }
    else if (count == 1) {
        if (number_by3) {
            printf("能被3整除");
        }
        else if (number_by5) {
            printf("能被5整除");
        }
        else if (number_by7) {
            printf("能被7整除");
        }
    }
    else if (count == 2) {
        printf("能被以下两个整除：");
        if (number_by3) printf("3 ");
        if (number_by5) printf("5 ");
        if (number_by7) printf("7 ");
    }
//


int p,w,s;
float d,f;
int code;
printf("请输入路程：");
scanf("%d",&s);
printf("请输入重量：");
scanf("%d",&w);
printf("请输入基本运费：");
scanf("%d",&p);
if (s==250){
    code=1;
}
if (s>=250&&s<500){
    code=2;
}
if (s>=500&&s<1000){
    code=3;
}
if (s>=1000&&s<2000){
    code=4;
}
if (s>=2000&&s<3000){
    code=5;
}
if (s>=3000){
    code=6;
}
switch (code){
    case 1:
        d=0;
        break;
    case 2:
        d=0.02;
        break;
    case 3:
        d=0.05;
        break;
    case 4:
        d=0.08;
        break;
    case 5:
        d=0.1;
        break;
    case 6:
        d=0.15;
        break;
}
f=p*w*(1-d);
printf("总运费为：%.2f",f);

//
#include <math.h>

int a,totally,n;
printf("请输入一个正整数a：");
scanf("%d",&a);
totally=0;
printf("请输入n的值：");
scanf("%d",&n);
int result;
result = pow(a,n);
totally = a*(1 - (int)pow(a,n))/(1 - a);
printf("前n项和为：%d",totally);

////
int main(void)
{
int a,b,c,n;
for (n=100;n<=999;n++){
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    if (n==a*a*a + b*b*b + c*c*c){
        printf("%d\n",n);
    }
}
return 0;
}

