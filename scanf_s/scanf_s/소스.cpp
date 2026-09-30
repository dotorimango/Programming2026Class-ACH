#include <stdio.h>

int main(void)
{
	//initialzing variables
	int nAge = 0;
	float fHeight = 0.0f;
	char cGender = 'M';
	char strName[50] = "Temporary";

	//getting variable information
	printf("Enter your age , height, gender, name:\n"):
	scanf_S("%d %f %c *s", &nAge, &fHeight, &cGender, &strName,
		sizeof(cGender), strName, sizeof(strName));

	//printing variable information
	printf("yourname is: %d\n", nAge);
	printf("your heignt is : %f\n, ")
	return 0;
}