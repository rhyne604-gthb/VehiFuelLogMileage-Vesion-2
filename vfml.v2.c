#include <stdio.h>
#define price_per_ltr 1.5

int main() {
    double start_km, end_km, liters;
    double distance, mileage, cost;

    printf("Start odometer (km): ");
    scanf("%lf", &start_km);

    printf("End odometer (km): ");
    scanf("%lf", &end_km);

    printf("Fuel used (liters): ");
    scanf("%lf", &liters);


    distance = end_km - start_km;
    mileage  = distance / liters;
    cost     = liters * price_per_ltr;

    printf("Distance = %.2f km\n", distance);
    printf("Mileage  = %.2f km/l\n", mileage);
    printf("Cost     = %.2f\n", cost);

    return 0;
}