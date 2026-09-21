#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double distance;
    double cost;
    double distance_after_quanity;
    double distance_after_price;


    setlocale(LC_CTYPE, "");

    printf("Введите расстояние в км: ");
    scanf("%lf", &distance);

    distance_after_quanity = distance / 10 ;
    cost = 70.7;
    distance_after_price = distance_after_quanity * cost;


    printf("\nРАСЧЕТ УВЕЛИЧЕНИЯ ЦЕНЫ ТОВАРА\n");
    printf("================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Исходная количество километров: %.0f\n", distance);
    printf("- Стоимость бензина: 70.7 рублей\n");
    printf("- Расход топлива на 100 км: 10 литров \n");

    printf("РАСЧЕТ:\n");
    printf("- Необходимое количество бензина: %.2f / 10 = %.2f литров\n",
        distance, distance_after_quanity);
    printf("- Затраченная сумма на поездку: %.2f * %.2f = %.2f рубля\n",
        distance_after_quanity, cost, distance_after_price);
    printf("================================\n");
    printf("Стоимость поездки: %.2f рублей\n", distance_after_price);


    return 0;
}
