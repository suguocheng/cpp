#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//11
// void f(int a[][5],int n);
// void g(int a[][5],int n);
// int main(void)
// {
//     int a[3][5]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
//     f(a,3);
//     g(a,3);
// }
// void f(int a[][5],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//     }
//     printf("\n");
// }
// void g(int a[][5],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             a[i][j]*=2;
//             printf("%d ",a[i][j]);
//         }
//     }
//     printf("\n");
// }
//10
// void f(int a[],int b[],int c[],int n);
// int main(void)
// {
//     int a[5]={1,1,1,1,1};
//     int b[5]={2,2,2,2,2};
//     int c[5];
//     f(a,b,c,5);
//     for(int i=0;i<5;i++)
//     {
//        printf("%d ",c[i]); 
//     }
    
// }
// void f(int a[],int b[],int c[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         c[i]=a[i]+b[i];
//     }
    
// }
//6
// double*f(double a[],int n);
// int main(void)
// {
//     double a[5]={1,2,3,4,5};
//     f(a,5);
// }
// double*f(double a[],int n)
// {
//     double b[n];
//     for(int i=0;i<n;i++)
//     {
//         b[i]=a[n-i-1];
//     }
//     for(int i=0;i<5;i++)
//     {
//         printf("%.2f ",b[i]);
//     }
// }