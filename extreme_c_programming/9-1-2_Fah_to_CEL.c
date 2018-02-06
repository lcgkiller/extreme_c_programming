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
    printf("1. È­¾¾ -> ¼·¾¾ º¯È¯ \n2. ¼·¾¾ -> È­¾¾ º¯È¯");
    scanf_s("%d", &choice);

    if (choice==1){
        printf("È­¾¾ ÀÔ·Â ");
        scanf_s("%lf", &input);
        printf("¼·¾¾ : %f", FahToCel(input));
        }

    else if (choice==2){
        printf("¼·¾¾ ÀÔ·Â ");
        scanf_s("%lf", &input);
        printf("È­¾¾ : %f", CelToFah(input));
    }

    else
        printf("Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù.");

    return 0;
}