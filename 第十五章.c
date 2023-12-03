#include<math.h>
#include<stdio.h>
#include<string.h>
//1
// int f(const char a[]);
// int main(void)
// {
//     char*a="01001001";
//     int n=f(a);
//     printf("%d",n);
// }
// int f(const char a[])
// {
//     int n=0;
//     int size=strlen(a);
//     for(int i=size-1;i>=0;i--)
//     {
//         if(a[i]=='1')
//         {
//             n+=pow(2.0,(double)(size-i-1));
//         }
//     }
//     return n;
// }
//问题：为什么这里不能直接gcc文件，还需要加-lm来连接数学库？
//4
// int f(int x, int n);
// char *g(int n, char *str);
// int main()
// {
//     int x=13;
//     int size=8*sizeof(int);
//     char str[8*sizeof(int)+1];
    
//     printf("%d(%s):\n",x,g(x,str));
//     for(int i=size-1;i>=0;--i)
//     {
//         printf("第%d位是%d\n",i+1,f(x,i));
//     }
//     return 0;
// }

// int f(int x,int n)
// {
//     return (x>>n)&1;
// }

// char*g(int n,char*str)
// {
//     int sz=8*sizeof(int);
//     for(int i=sz-1;i>=0;--i,n>>=1)
//     {
//         str[i]=(n&1)+'0';
//     }
//     str[sz]='\0';
//     return str;
// }