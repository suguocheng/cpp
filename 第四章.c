#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//6
// int main(void)
// {
//     printf("请输入名：");
//     char ming[10];
//     scanf("%s",ming);
//     printf("请输入姓：");
//     char xing[10];
//     scanf("%s",xing);
//     printf("%s %s\n",ming,xing);
//     for(int i=1;i<strlen(ming);i++)
//     {
//         printf(" ");
//     }
//     printf("%ld",strlen(ming));
//     for(int i=0;i<strlen(xing);i++)
//     {
//         printf(" ");
//     }
//     printf("%ld\n",strlen(xing));
//     printf("%s %s\n",ming,xing);
//     printf("%ld",strlen(ming));
//     for(int i=0;i<strlen(ming);i++)
//     {
//         printf(" ");
//     }
//     printf("%ld",strlen(xing));
//     for(int i=1;i<strlen(xing);i++)
//     {
//         printf(" ");
//     }
// }
//5
// int main(void)
// {
//     float v,x,t;
//     printf("请输入下载速度与文件大小：");
//     scanf("%f %f",&v,&x);
//     t=x/v;
//     printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.",v,x,t);
// }