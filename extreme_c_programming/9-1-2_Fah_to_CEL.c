double FahToCel(double cel){
    double result;
    result = (1.8 * cel) + (double)32;
    return result;
}
double CelToFah(double fah){
    double result;
    result = (fah / 1.8) - (double)32.0;
    return result;
}

int main(void){
    int choice;
    double input;
    printf("1. ȭ�� -> ���� ��ȯ \n2. ���� -> ȭ�� ��ȯ");
    scanf_s("%d", &choice);

    if (choice==1){
        printf("ȭ�� �Է� ");
        scanf_s("%lf", &input);
        printf("���� : %f", FahToCel(input));
        }

    else if (choice==2){
        printf("���� �Է� ");
        scanf_s("%lf", &input);
        printf("ȭ�� : %f", CelToFah(input));
    }

    else
        printf("�߸��� �Է��Դϴ�.");

    return 0;
}