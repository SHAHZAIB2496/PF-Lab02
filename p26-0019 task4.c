#include<stdio.h>
int main()
{
	float celsius =37.5,kelvin,fahrenheit;
	kelvin = celsius + 273.15;
	fahrenheit=celsius*(9.0/5.0) + 32.0;
	printf("================ TEMPERATURE CONVERSION =================\n");
	printf("Temperature in Celsius:%.2f\n",celsius);
	printf("Temperature in fahrenheit:%.2f\n",fahrenheit);
	printf("Temperature in kelvin:%.2f\n",kelvin);
    printf("=========================================================");	

    return 0;
}
