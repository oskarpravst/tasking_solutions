#include <stdio.h>

typedef struct
{
    char name[20];
    int maxSpeed; // km/h
    int maxRPM;
    int torque;     // Nm
    int horsepower; // hp
    int numberOfGears;
} carInstance;

void printBestCarStats(carInstance cars[])
{
    int bestMaxSpeed = cars[0].maxSpeed;
    char *bestMaxSpeedCar = cars[0].name;

    int bestMaxRMP = cars[0].maxRPM;
    char *bestMaxRMPCar = cars[0].name;

    int bestTorque = cars[0].torque;
    char *bestTorqueCar = cars[0].name;

    int bestHorsepower = cars[0].horsepower;
    char *bestHorsepowerCar = cars[0].name;

    int bestNumberOfGears = cars[0].numberOfGears;
    char *bestNumberOfGearsCar = cars[0].name;

    int i;

    for (i = 0; i < 3; i++)
    {
        if (cars[i].maxSpeed > bestMaxSpeed)
        {
            bestMaxSpeed = cars[i].maxSpeed;
            bestMaxSpeedCar = cars[i].name;
        }
        if (cars[i].maxRPM > bestMaxRMP)
        {
            bestMaxRMP = cars[i].maxRPM;
            bestMaxRMPCar = cars[i].name;
        }
        if (cars[i].torque > bestTorque)
        {
            bestTorque = cars[i].torque;
            bestTorqueCar = cars[i].name;
        }
        if (cars[i].horsepower > bestHorsepower)
        {
            bestHorsepower = cars[i].horsepower;
            bestHorsepowerCar = cars[i].name;
        }
        if (cars[i].numberOfGears > bestNumberOfGears)
        {
            bestNumberOfGears = cars[i].numberOfGears;
            bestNumberOfGearsCar = cars[i].name;
        }
    }

    printf("Best maxSpeed: %s - %d\n", bestMaxSpeedCar, bestMaxSpeed);
    printf("Best maxRPM: %s - %d\n", bestMaxRMPCar, bestMaxRMP);
    printf("Best torque: %s - %d\n", bestTorqueCar, bestTorque);
    printf("Best horsepower: %s - %d\n", bestHorsepowerCar, bestHorsepower);
    printf("Best numberOfGears: %s - %d\n", bestNumberOfGearsCar, bestNumberOfGears);
}
int main()
{
    carInstance oskar = {"Oskar", 240, 6800, 320, 280, 6};
    carInstance don = {"Don", 310, 6000, 410, 300, 7};
    carInstance glenn = {"Glenn", 180, 6200, 250, 310, 5};

    carInstance cars[] = {oskar, don, glenn};

    printBestCarStats(cars);

    return 0;
}