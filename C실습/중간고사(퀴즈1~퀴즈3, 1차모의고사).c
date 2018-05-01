#include <stdio.h>
void P18(){
    int num;
    int i=0;
    int devide =2;
    int cnt=0;
    scanf("%d", &num);

    while(num!=1){
        if ( num % devide == 0){
            num /= devide;
            cnt++;
            continue;
        }
        else{
            if (cnt!=0) printf("%d %d\n", devide, cnt);
        }
        cnt = 0;
        devide++;
    }
    printf("%d %d\n", devide, cnt);
}
void P17(){
    int num;
    int reverse = 0;
    int i=1;
    int result =0 ;
    int digit=0;
    int cnt=1;
    int temp;
    scanf("%d", &num);
    temp = num;
    
    while(temp!=0){
        digit++;
        temp /= 10;
    }

    while(cnt!=digit){
        i *= 10;
        cnt++;
    }

    while(num!=0){
        reverse += i * (num % 10);
        i /= 10;
        num /= 10;
    }

    for(i=1; i<=reverse; i++){
        if (reverse % i == 0) result++;
    }
    printf("%d\n%d", reverse,result);
}

void P16(){
    int cnt1=0, cnt2=0;
    int num=1;

    while(num>0){
        scanf("%d", &num);
        
        if(num == 0 || num < 0) break;

        if(num>=1 && num<=100){
            cnt1++;
            cnt2++;
        }
        else{
            cnt1++;
        }
    }

    printf("%d %d", cnt1, cnt2);
}
void P15(){
    int a, b, c;
    int num;
    int i;
    int sum=0;
    scanf("%d", &num);

    for(i=0; i<num; i++){
        sum = 0;
        scanf("%d %d %d", &a, &b, &c);

        if(a>1000 || a < 1){
            printf("%d %d", i+1, a);
            break;
        }
        if(b>1000 || b< 1){
            printf("%d %d", i+1, b);
            break;
        }
        if(c>1000 || c< 1){
            printf("%d %d", i+1, c);
            break;
        }
        sum = a+b+c;
        printf("%d\n", sum);
    }
}
void P14(){
    int num;
    int i, j,k;

    scanf("%d", &num);

    for(i=0; i<num; i++){
        for(j=0; j<=i; j++){
            printf(" ");
        }
        for(j = num*2-1 - (i*2); j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
}
void P13(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%.2lf", a*0.2+b*0.3+c*0.5);
}

void P12(){
    int num;
    scanf("%d", &num);
    int i=1, j;
    int a = num / 10 % 10; // 5
    int b = num % 10; // 7
    
    for(i=1; i<=a; i++){ // 5줄 
        for(j=1; j<=b; j++){ // 7줄
            if(i==1 || i == a)
                printf("%d", j);
            else{
                if (j==1)
                    printf("%d", j);
                else if (j==b)
                    printf("%d", j);
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
void P11(){
    int num;
    int cnt=0;
    scanf("%d", &num);

    while(num!=0){
        cnt++;
        num/=10;
    }

    printf("%d", cnt);
}
void P10(){
    int num;
    int min=0, max=0;
    int sum=0;
    
    scanf("%d", &num);
    sum = num;
    min = max = num;
    while(num!=-99){
        scanf("%d", &num);

        if(num==-99) break;

        else{
            if(max < num){
                max = num;
            }

            if(min > num){
                min = num;
            }
        }
        

        sum += num;
    }

    printf("%d %d %d", sum, max, min);
}
void P9(){
    int num;
    int i;
    int sum =0;
    int input;
    scanf("%d", &num);
    for(i=0; i<num; i++){
        scanf("%d", &input);
        sum += input;
    }

    printf("%d", sum);
}
void P8(){
    char a,b,c;
    scanf("%c %c %c", &a, &b, &c);

    a = a=='*' ? '+' : a;
    b = b=='*' ? '+' : b;
    c = c=='*' ? '+' : c;
    
    a = a=='@' ? '#' : a;
    b = b=='@' ? '#' : b;
    c = c=='@' ? '#' : c;

    a = a>='1' && a<='9' ? 'N' : a;
    b = b>='1' && b<='9' ? 'N' : b;
    c = c>='1' && c<='9' ? 'N' : c;

    printf("%c%c%c\n", a,b,c);

}
void P7(){
    int a,b,c,d,e;
    int result1 = 0, result2 = 0, result3 = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a>0) result1++;
    if (b>0) result1++;
    if (c>0) result1++;
    if (d>0) result1++;
    if (e>0) result1++;
    if (a==0) result2++;
    if (b==0) result2++;
    if (c==0) result2++;
    if (d==0) result2++;
    if (e==0) result2++;
    if (a<0) result3++;
    if (b<0) result3++;
    if (c<0) result3++;
    if (d<0) result3++;
    if (e<0) result3++;

    printf("%d %d %d", result1, result3, result2);

}

void P6(){
    int a, b;

    scanf("%d %d", &a, &b);

    if ( a<0 || b<0){
        printf("Negative");

        if(a==0||b==0){
            printf("0");
        }
    }
    else{
        printf("%d", (int)((a+b)/2.0+0.5));
    }

}
void P5(){
    int a,b,c;
    int sum = 0;
    int result = 0;

    scanf("%d %d %d", &a, &b, &c);

    sum += a % 2 == 0 ? a : 0;
    sum += b % 2 == 0 ? b : 0;
    sum += c % 2 == 0 ? c : 0;

    printf("%d %.1lf", sum, (double)sum/3 );


}
void P4(){
    int num;
    int a,b,c;
    int result;
    scanf("%d", &num);

    a = num % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;

    result = a*100 + b*10 + c;

    printf("%03d", result);

}
void P3(){
    char a,b,c;
    int result1 = 0;

    scanf("%c %c %c", &a, &b, &c);

    result1 += (a>='a' && a<='z') || (a>='A' && a<='Z') ? 1 : 0;
    result1 += (b>='a' && b<='z') || (b>='A' && b<='Z') ? 1 : 0;
    result1 += (c>='a' && c<='z') || (c>='A' && c<='Z') ? 1 : 0;
    
    printf("%d", result1);
}

void P2(){
    int a, b;
    char c;
    int result;

    scanf("%d %d %c", &a, &b, &c);

    (c == '+') ? printf("%d", a+b) : (c == '/') ? printf("%.2lf\n", (double)a/b) : printf("Wrong\n");


}
void P1(){
    int r;
    double pi = 3.14;
    double result;

    scanf("%d", &r);

    result = (int)(4.0/3.0*pi*(double)(r*r*r)+5) / 10 * 10; // 일의 자리에서 반올림 Technic
    printf("%d\n", (int)result);
    
}

int main(void){
    // P1(); // 퀴즈 1-1 : 구의 부피 구하기
    // P2(); // 퀴즈 1-2 : if문을 사용하지 않고 계산결과 출력하기
    // P3();
    // P4();
    // P5();
    // P6();
    // P7();
    // P8();
    // P9();
    // P10();
    // P11();
    // P12();
    // P13();
    // P14();
    // P15();
    // P16();
    // P17(); // 1차 모의고사 문제 E
    P18(); // 1차 모의고사 문제 F
    return 0;
}
