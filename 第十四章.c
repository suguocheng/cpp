#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//11
// void transform(double source[],double target[],int n,double f(double a));
// int main(void)
// {
//     double a[5]={1,2,3,4,5};
//     double b[5];
//     transform(a,b,5,sin);
//     for(int i=0;i<5;i++)
//     {
//         printf("%.2f ",b[i]);
//     }
// }
// void transform(double source[],double target[],int n,double f(double a))
// {
//     for(int i=0;i<n;i++)
//     {
//         target[i]=f(source[i]);
//     }
// }
//5
// struct name
// {
//     char first_name[10];
//     char last_name[10];
// };
// struct student
// {
//     struct name names;
//     double point[3];
//     double average;
// };
// int main(void)
// {
//     struct student students[4];
//     for(int i=0;i<4;i++)
//     {
//         strcpy(students[i].names.first_name,"0");
//         strcpy(students[i].names.last_name,"0");
//     }
//     for(int i=0;i<4;i++)
//     {
//         printf("请输入学生的姓名与分数：\n");
//         scanf("%s %s",students[i].names.first_name,students[i].names.last_name);
//         for(int j=0;j<3;j++)
//         {
//             scanf("%lf",&students[i].point[j]);
//         }
//     }
//     for(int i=0;i<4;i++)
//     {
//         double total=0;
//         for(int j=0;j<3;j++)
//         {
//             total+=students[i].point[j];
//         }
//         students[i].average=total/3;
//     }
//     printf("这是学生的成绩单：\n");
//     for(int i=0;i<4;i++)
//     {
//         printf("%s %s ",students[i].names.first_name,students[i].names.last_name);
//         for(int j=0;j<3;j++)
//         {
//             printf("%.2f ",students[i].point[j]);
//         }
//         printf("%.2f\n",students[i].average);
//     }
// }
//4
// struct name
// {
//     char a[10];
//     char b[10];
// };
// struct information
// {
//     int num;
//     struct name names;
// };
// void f(struct information*informations);
// int main(void)
// {
//     struct information informations[5];
//     for(int i=0;i<5;i++)
//     {
//         printf("请输入社会保险号：\n");
//         scanf("%d",&informations[i].num);
//         printf("请输入姓名：\n");
//         scanf("%s %s",informations[i].names.a,informations[i].names.b);
//     }
//     f(informations);
// }
// void f(struct information*informations)
// {
//     printf("以下为输出列表：\n");
//     for(int i=0;i<5;i++)
//     {
//         printf("%s %s ",informations[i].names.a,informations[i].names.b);
//         printf("-- %d\n",informations->num);
//     }
// }