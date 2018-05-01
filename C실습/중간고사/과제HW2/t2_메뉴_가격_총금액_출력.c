#include <stdio.h>

int main(void){

    // 메뉴 정보 1번~5번
    int pizza = 15000;  // 피자 15,000원
    int burger = 5000;  // 버거 5,000원
    int salad = 4500;   // 샐러드 4,500원
    int ice_cream = 800;// 아이스크림 800원
    int beverage = 500; // 음료 500원
    
    // 주문 번호 num1, num2, num3
    int num1, num2, num3;

    // 총 계
    int total = 0;

    // 주문번호 3개 입력
    scanf("%d %d %d", &num1, &num2, &num3);

    
    // 첫번째 주문 메뉴 
    switch(num1){
        case 1: // 피자 선택
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // 버거 선택
            printf("Burger\n");
            total += burger;
            break;
        case 3: // 샐러드 선택
            printf("Salad\n");
            total += salad;
            break;
        case 4: // 아이스크림 선택
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // 음료 선택
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0번 선택(아무것도 선택하지 않은 경우)
            printf("None\n");
            break;
    }

    // 두번째 주문 메뉴 
    switch(num2){
        case 1: // 피자 선택
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // 버거 선택
            printf("Burger\n");
            total += burger;
            break;
        case 3: // 샐러드 선택
            printf("Salad\n");
            total += salad;
            break;
        case 4: // 아이스크림 선택
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // 음료 선택
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0번 선택(아무것도 선택하지 않은 경우)
            printf("None\n");
            break;
    }

    switch(num3){
        case 1: // 피자 선택
            printf("Pizza\n"); 
            total += pizza;
            break;
        case 2: // 버거 선택
            printf("Burger\n");
            total += burger;
            break;
        case 3: // 샐러드 선택
            printf("Salad\n");
            total += salad;
            break;
        case 4: // 아이스크림 선택
            printf("Ice cream\n");
            total += ice_cream;
            break;
        case 5: // 음료 선택
            printf("Beverage\n");
            total += beverage;
            break;
        default: // 0번 선택(아무것도 선택하지 않은 경우)
            printf("None\n");
            break;
    }

    printf("Total:%dwon\n",total);
    return 0;
}