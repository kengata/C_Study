#include <stdio.h>

int main(void){
    int suuti;
    printf("\n");
    printf("--------<Program Start>-------\n");
    printf("入力してください：");
    scanf("%d",&suuti);
    if (suuti <= 10) {
        printf("それは10以下。入力値：%d\n",suuti);    
    } else {
        printf("それは10より大きい。入力値：%d\n",suuti);
    }
    return 0;
}