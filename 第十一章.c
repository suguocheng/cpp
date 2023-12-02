#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//12
// int main(void)
// {
//     char a[100];
//     gets(a);
//     int i=0;
//     int b=0,c=0,d=0,e=0,f=0;
//     while(a[i]!='\0')
//     {
//         if(isgraph(a[i])==0)
//         {
//             b++;
//         }
//         if(isupper(a[i])!=0)
//         {
//             c++;
//         }
//         if(islower(a[i])!=0)
//         {
//             d++;
//         }
//         if(ispunct(a[i])!=0)
//         {
//             e++;
//         }
//         if(isdigit(a[i])!=0)
//         {
//             f++;
//         }
//         i++;
//     }
//     printf("单词数：%d\n大写字母数：%d\n小写字母数：%d\n标点符号数：%d\n数字字符数：%d\n",b+1,c,d,e,f);
// }
//11
void f(char*a[],int n);
void g(char*a[],int n);
void h(char*a[],int n);
int main(void)
{
    char a[10][100];
    printf("请输入：\n");
    for(int i=0;i<10;i++)
    {
        gets(a[i]);
        if(a[i][0]==EOF)
        {
            break;
        }
    }
    int i;
    printf("请输入：\n1.打印源字符串列表\n2.以ASCII中的顺序打印字符串\n3.按长度递增顺序打印字符串\n4.按字符串中第一个单词的长度打印字符串\n5.退出\n");
    scanf("%d",&i);
    while(i!=5)
    {
        if(i==1)
        {
            for(int i=0;i<10;i++)
            {
                puts(a[i]);
            }
        }
        else if(i==2)
        {
            char *p[10];
            for(int i=0;i<10;i++)
            {
                p[i]=a[i];
            }
            f(p,10);
            for(int i=0;i<10;i++)
            {
                puts(p[i]);
            }
        }
        else if(i==3)
        {
            char *p[10];
            for(int i=0;i<10;i++)
            {
                p[i]=a[i];
            }
            g(p,10);
            for(int i=0;i<10;i++)
            {
                puts(p[i]);
            }
        }
        else if(i==4)
        {
            char *p[10];
            for(int i=0;i<10;i++)
            {
                p[i]=a[i];
            }
            h(p,10);
            for(int i=0;i<10;i++)
            {
                puts(p[i]);
            }
        }
        else
        {
            printf("请重新输入");
        }
        printf("请输入：\n1.打印源字符串列表\n2.以ASCII中的顺序打印字符串\n3.按长度递增顺序打印字符串\n4.按字符串中第一个单词的长度打印字符串\n5.退出\n");
        scanf("%d",&i);
    }
}
void f(char*a[],int n)
{
    char*temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void g(char*a[],int n)
{
    char*temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strlen(a[i])>strlen(a[j]))
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void h(char*a[],int n)
{
    int b[10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(a[i][j]==32||a[i][j]=='\0')
            {
                b[i]=j;
                break;
            }
        }
    }
    char*temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }  
}