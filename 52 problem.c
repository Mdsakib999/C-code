// Write a program that converts temperature Celsius to Fahrenheit.


#include <stdio.h>
float temp_fahrenheit;     
float temp_celsius;     
char line_text[50];        

int main() {
	printf("Input a temperature in Celsius: ");
	fgets(line_text, sizeof(line_text), stdin);
	sscanf(line_text, "%f", &temp_celsius);

	temp_fahrenheit = ((9.0 / 5.0) * temp_celsius) + 32.0;
	
	printf("%f degrees Fahrenheit.\n", temp_fahrenheit);

	return(0);
}
