#include <stdio.h>

int max(int a, int b){
    int max = a > b ? a : b;
    return max;
}

void print_characters(char c, int n){
    int i=0;
    for(i=0; i<n; i++){
        printf("%c\n", c);
    }
}

double divide(int a, int b){
    return (double)a/b;
}

float add3(float a, float b, float c){
    return a+b+c;
}

char atoA(char ch){
    return ch + ('A' - 'a');
}

int add(int x, int y){
    int z = -1;
    printf("add strat : x = %d, y = %d, z = %d\n", x,y,z);
    z = x+y;
    printf("add end : x = %d, y = %d, z = %d\n", x,y,z);
    return z;
}

int main(void){
    // printf("%d", max(15, 20));
    // print_characters('d', 5);
    // printf("%lf", divide(3, 2));
    // printf("%lf", add3(3.5, 2.5, 1.7));
    // printf("%c", atoA('c'));
    // int c = 0;
    // printf("main start : c = %d\n", c);
    // c = add(3,4);
    // printf("main end : c = %d\n", c);

    // 실습 6
    // char start = 'a';
    // int i=0; 
    // for(i=0; i<26; i++){
    //     print_characters(start+i, i+1);
    // }

    // 실습 7
    int a,b,c,d;
    int result1, result2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    result1 = max(a,b);
    result2 = max(c,d);
    printf("%d", max(result1, result2));


    return 0;
}


// char next_char(char c, int num){
//     return  c+num;
// }

// int main(void){
//     char c;
//     int num;
//     scanf("%c %d", &c, &num);
//     printf("%c", next_char(c, num));

//     return 0;
// }

// int add(int x, int y){
//     return x+y;
// }

// int main(void){
//     int x, y;

//     scanf("%d %d", &x, &y);
//     printf("%d", add(x, y));
    
//     return 0;
// }