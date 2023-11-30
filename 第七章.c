#include<math.h>
#include<stdio.h>
//11
// void cleanup(void);
// int main(void)
// {
//     int total_pound=0,artichoke_pound=0,beet_pound=0,carrot_pound=0,a,b,c;
//     printf("输入a以输入洋蓟的磅数\n输入b以输入甜菜的磅数\n输入c以输入胡萝卜的磅数\n输入q以退出并计算\n");
//     char choice;
//     while((choice=getchar())!=EOF)
//     {
//         switch(choice)
//         {
//             case'a':printf("请输入洋蓟的磅数\n");
//                 scanf("%d",&a);
//                 cleanup();
//                 artichoke_pound+=a;
//                 break;
//             case'b':printf("请输入甜菜的磅数\n");
//                 scanf("%d",&b);
//                 cleanup();
//                 beet_pound+=b;
//                 break;
//             case'c':printf("请输入胡萝卜的磅数\n");                
//                 scanf("%d",&c);
//                 cleanup();
//                 carrot_pound+=c; 
//                 break;               
//             case'q':total_pound=artichoke_pound+beet_pound+carrot_pound;
//                 break;    
//         }
//         if(choice=='q')
//         {
//             break;
//         }
//         printf("输入a以输入洋蓟的磅数\n输入b以输入甜菜的磅数\n输入c以输入胡萝卜的磅数\n输入q以退出并计算\n");                    
//     }
//     double total_price=2.05*artichoke_pound+1.15*beet_pound+1.09*carrot_pound;
//     double total_price2;
//     double discount=0;
//     double other_expenses;
//     if(total_price>100)
//     {
//         discount=0.95;
//         total_price2=discount+total_price;
//     }
//     if(total_pound<=5)
//     {
//         other_expenses=6.5;
//         total_price2=other_expenses+total_price;
//     }
//     else if(total_pound>5&&total_pound<=20)
//     {
//         other_expenses=14;
//         total_price2=other_expenses+total_price;
//     }
//     else if(total_pound>20)
//     {
//         other_expenses=14+(total_pound-20)*0.5;
//         total_price2=other_expenses+total_price;
//     }
//     printf("洋蓟的售价：2.05美元/磅\n甜菜的售价：1.15美元/磅\n胡萝卜的售价：1.09美元/磅\n");
//     printf("订购的洋蓟重量：%d磅\n订购的甜菜重量：%d磅\n订购的胡萝卜重量：%d磅\n订购的蔬菜费用：%.2f\n折扣：%.2f\n运费和包装费：%.2f\n费用总额：%.2f\n",artichoke_pound,beet_pound,carrot_pound,total_price,discount,other_expenses,total_price2);
// }
// void cleanup(void)
// {
//     while(getchar()!='\n')
//     {
//         continue;
//     }
// }
//9
// int main(void)
// {
//     unsigned int a;
//     scanf("%d",&a);
//     unsigned int x;
//     for(x=2;x<=a;x++)
//     {
//         if(x<4)
//         {
//             printf("%d ",x);
//         }
//         if(x>=4)
//         {
//             int n=0;
//             for(int i=2;i<=x/i;i++)
//             {
//                 if(x%i==0)
//                 {
//                     n=1;
//                     break;
//                 }                
//             }
//             if(n==0)
//             {
//                 printf("%d ",x);
//             }  
//         }
        
//     }
// }