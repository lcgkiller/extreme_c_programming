#include <stdio.h>
#include <math.h>

void P5(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double temp = (b*b)-(4.0*a*c);

    if (a==0){
        printf("%lf", -c/b);
    }
    else{
        if (temp<0){
            printf("none");
        }
        else{
            if (temp==0){
                printf("%lf", -b/(2.0*a));
            }
            else if (temp>0){
                printf("%lf %lf", (-b-sqrt(temp))/(2.0*a), (-b+sqrt(temp))/(2.0*a));
            }
        }
    }
}
void P4(){
    int a, b;
    char c;

    scanf("%c %d %d", &c, &a, &b);

    if(c=='*') printf("%d", a*b);
    else if(c=='+') printf("%d", a+b);
    else if(c=='-') printf("%d", a-b);
    else if(c=='/') printf("%.1lf", (double)a/(double)b);
    else printf("none");

}
void P3(){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);
 
    if (a+b==c) printf("+\n"); // a+b==c이면 + 출력
    if (a-b==c) printf("-\n"); // a-b==c이면 - 출력
    if (a*b==c) printf("*\n"); // a*b==c이면 * 출력
    if (a/b==c) printf("/\n"); // a/b==c이면 / 출력
    if (a+b!=c && a-b!=c && a*b!=c && a/b!=c) printf("Incorrect\n");

}
void P2(){
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

}
void P1(){
    char c;
    scanf("%c", &c);

    if (c>='a' && c<='z'){
        c = c + 'A' - 'a';
    }
    else if (c>='A' && c<='Z'){
        c = c - ('A' - 'a');
    }

    printf("%c", c);
}

int main(void){
    // P1();
    // P2();
    // P3();
    // P4();
    P5();
}