#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//5
// int main(void)
// {
//     int a[100];
//     for(int i=0;i<100;i++)
//     {
//         a[i]=rand();
//     }
//     for(int i=0;i<99;i++)
//     {
//         int n=0;
//         for(int j=0;j<99-i;j++)
//         {
//             if(a[j]<a[j+1])
//             {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//                 n=1;
//             }
//         }
//         if(n==0)
//         {
//             break;
//         }
//     }
//     for(int i=1;i<100;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
//9
// int main(void)
// {
//     printf("你需要输入多少个单词？");
//     int n;
//     scanf("%d",&n);
//     printf("现在输入%d个单词：\n",n);
//     char**a;
//     a=(char**)malloc(sizeof(char*)*n);
//     for(int i=0;i<n;i++)
//     {
//         a[i]=(char*)malloc(sizeof(char)*46);
//         scanf("%s",a[i]);
//     }
//     printf("这里是你的单词：\n");
//     for(int i=0;i<n;i++)
//     {
//         printf("%s\n",a[i]);
//     }
//     free(a);
// }