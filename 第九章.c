#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//7
// void f(void);
// int main(void)
// {
//     f();
// }
// void f(void)
// {
//     char response;
//     printf("请输入一个字符\n");
//     while((response=getchar())!=EOF)
//     {
//         if(response>='A'&&response<='Z')
//         {
//             printf("是字母%c\n",response);
//             printf("在字母表的第%d个位置\n",response-64);
//         }
//         else if(response>='a'&&response<='z')
//         {
//             printf("是字母%c\n",response);
//             printf("在字母表的第%d个位置\n",response-96);
//         }
//         else
//         {
//             printf("-1\n");
//         }
//         while(getchar()!='\n')
//         {
//             continue;
//         }
//         printf("请输入一个字符\n");
//     }
// }
//6
// void f(double*a,double*b,double*c);
// int main(void)
// {
//     double a,b,c;
//     printf("请输入三个数：");
//     scanf("%lf %lf %lf",&a,&b,&c);
//     f(&a,&b,&c);
//     printf("%.2f %.2f %.2f",a,b,c);
// }
// void f(double*a,double*b,double*c)
// {
//     int temp;
//     if(*a>*b&&*b>*c)
//     {
//         temp=*a;
//         *a=*c;
//         *c=temp;
//     }
//     else if(*a>*c>*b)
//     {
//         temp=*a;
//         *a=*b;
//         *b=*c;
//         *c=temp;
//     }
//     else if(*b>*a>*c)
//     {
//         temp=*a;
//         *a=*c;
//         *b=temp;
//         *c=*b;
//     }
//     else if(*b>*c>*a)
//     {
//         temp=*b;
//         *b=*c;
//         *c=temp;
//     }
//     else if(*c>*a>*b)
//     {
//         temp=*a;
//         *a=*b;
//         *b=temp;
//     }
// }