#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
int main(void)
{
    int guess=50;
    char response;
    int min=1,max=100;
    printf("请想出一个0～100的数，我会尝试去猜它，如果猜小了，请输入l，如果猜大了，请输入m。\n");
    printf("现在开始，是%d吗？\n",guess);
    while((response=getchar())!='y')
    {
        if(response=='l')
        {
            min=guess;
            guess=(guess+max)/2;
            printf("是%d吗？\n",guess);
        }
        else if(response=='m')
        {
            max=guess;
            guess=(guess+min)/2;
            printf("是%d吗？\n",guess);
        }
        else
        {
            printf("对不起，你只能输入l或s。");
        }
        while(getchar()!='\n')
        {
            continue;
        }
    }
    printf("我猜对啦，是%d",guess);
}