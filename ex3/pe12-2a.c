#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static int distance;
static float fuel;
//---------------------------------------------------//
void set_mode(int mode_1)
{
    extern int mode;
    mode= mode_1;
    if (mode>1)
        printf("Invalid mode specified. Mode 1(US) used.\n");
}
//-----------------------------------------------------//
void get_info(void)
{
    extern int mode;
    extern int distance;
    extern float fuel;
    if (mode >= 1)
    {
        fputs("Enter distance traveled in miles: ", stdout);
        scanf("%d", &distance);
        fputs("Enter fuel consumed in gallons: ", stdout);
        scanf("%f", &fuel);
    }
    else
    {
        fputs("Enter distance traveled in kilometers: ", stdout);
        scanf("%d", &distance);
        fputs("Enter fuel consumed in liters: ", stdout);
        scanf("%f", &fuel);
    }
}
//----------------------------------------------------------//
void show_info(void)
{
    float result;
    extern int mode;
    extern int distance;
    extern float fuel;
    result= (mode >= 1)? distance/fuel: 100/(distance/fuel);
    if (mode==0)
        printf("Fuel consumption is %.2f liters per 100 km\n", result);

    else printf("Fuel consumption is %.1f miles per gallon.\n", result);
}
