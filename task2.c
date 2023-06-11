#include <stdio.h>

int main(void)
{
    int tall;
    printf("身長を入力せよ:");  scanf("%d",&tall);
    printf("標準体重は%.1fです。\n",(tall-100)*0.9);
}