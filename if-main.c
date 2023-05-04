#include <stdio.h>

int main(void)
{
	int userage;

	printf("What is your age? ");
	scanf("%d", &userage);

	if (userage >= 18)
	{
		printf("You can drink alcohol if you like\n");
	}
	else if(userage >= 18 && userage <= 45)
	{
		printf("You mean you want to continue drinking");
	}

	else
	{
		printf("You cannot drink alcohol, Just take a soft drink");

	}
	return (0);
}
