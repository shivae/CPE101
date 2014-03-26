#include <stdio.h>

int main(){
	float weight, weightkg, BMI, TDEE, BMR;
	int height, height2, age;
	char gender;

	printf("Enter height (inches): ");
	scanf("%d", &height);
	printf("Enter weight: ");
	scanf("%f", &weight);
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter gender (M or F): ");
	scanf(" %c", &gender);

	height2 = height * height;
	BMI = (weight / height2) * 703;

	printf("BMI: %.2f\n", BMI);

	if (BMI <= 18.5){
		printf("You're underweight!\n");
	}
	if (BMI > 18.5 && BMI <= 24.9){
		printf("You're fine!\n");
	}
	if (BMI > 24.9 && BMI < 30){
		printf("You're overweight!\n");
	}
	if (BMI >= 30){
		printf("You're obese!\n");
	}

	weightkg = weight * .453592;
	height = height * 2.54;

	TDEE = 9.99 * weightkg + 6.25 * height - 4.92 * age;

	if (gender == 'M'){
		TDEE += 5;
		BMR = 66 + 13.7 * weightkg + 5 * height - 6.8 * age;
	}
	if (gender == 'F'){
		TDEE -= 161;
		BMR = 655 + 9.6 * weightkg + 1.8 * height - 4.7 * age;
	}

	printf("Your Total Daily Energy Expenditure is %.2f\n", TDEE);
	printf("Your Basal Metabolic Rate is %.2f\n", BMR);
	printf("You should eat %.2f grams of protein per day\n", weight);

	return 0;
}