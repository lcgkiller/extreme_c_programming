#include <stdio.h>
/* 3/27(ȭ) C���α׷��� */

/* �ǽ� 7 - switch 
int main(){
    int score = 0;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &score);

    switch(score/10){
        case 10 : // ���⿡�� ���� �ʾƵ� ��.
        case 9 : printf("A\n"); break;
        case 8 : printf("B\n"); break;
        case 7 : printf("C\n"); break;
        case 6 : printf("D\n"); break;
        default : printf("F\n"); break;
    }
    return 0;
}
*/

// �ǽ� 10 switch
// int main(void){
//     char c;
//     scanf("%c", &c);
//     switch(c){
//         case 'T':
//         case 't' : printf("Tigers\n"); break;
//         case 'E' : case 'e' : printf("Eagles\n"); break;
//         case 'B' : case 'b' : printf("Bears\n"); break;
//         default : printf("none\n");
//     }

//     return 0;
// }

// �ǽ� 11
int main(void){
    int num;
    int result;
    scanf("%d", &num);

    switch(num){
        case 0 : case 3 : case 4 : case 7 :
            printf("13*13 = ");
            scanf("%d", &result);
            if (result == 13*13) printf("����\n");
            else printf("Ʋ��\n");
            break;
        case 1 : case 2 : case 9 :
            printf("17*17 = ");
            scanf("%d", &result);
            if (result == 17*17) printf("����\n");
            else printf("Ʋ��\n");
            break;
        case 5 : case 6 : case 8:
            printf("19*19 = ");
            scanf("%d", &result);
            if (result == 19*19) printf("����\n");
            else printf("Ʋ��\n");
            break;
        default:
            printf("none\n");      
    }
    return 0;
}

