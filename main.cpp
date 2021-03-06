//迭代法  
/* 
================================================================== 
题目：牛顿迭代法求a的平方根！迭代公式：Xn+1=(Xn+a/Xn)/2. 
================================================================== 
*/  
#include<stdio.h>  
#include<math.h>  
main()  
{  
float a,x0,x1;  
int flag=1;  
while(flag)  
{  
printf("a=");  
scanf("%f",&a);  
if(a>=0)  
flag=0;  
else  
printf("你所输入的数不能求平方根，请重试！\n_______________________________\n\n");  
}  
x0=1;  
x1=x0+1;  
while(fabs(x0-x1)>=1e-10)  
{  
x0=x1;  
x1=0.5*(x0+a/x0);  
}  
printf("%.2f的平方根是：%.2f\n",a,x1);  
}  
/* 
================================================================== 
评：实质是迭代法，先输入符合条件的数a，给x0和x1赋值，使得差的绝对值 
大于10的-10次方。当差大于等于10的-10次方时使用迭代公式使x0和x1的差 
小于10的-10次方。则平方根就是x1或x0. 
================================================================== 
*/  
