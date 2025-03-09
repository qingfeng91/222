#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,d;

printf("请输入三位正整数\n");
scanf("%d",&a);
b=a/100;
c=((a%100)-a%10)/10;
d =a%10;
printf("百位数%d\n",b);
printf("十位数%d\n",c);
printf("个位数%d\n",d);
printf("逆序数%d\n各个数字和%d\n",d*100+c*10+b,b+d+c);
system("pause");
return 0;
}