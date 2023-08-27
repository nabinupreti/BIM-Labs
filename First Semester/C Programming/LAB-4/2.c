#include <stdio.h>
void main()
{
	char ch;
	printf("Press 'o' for open \nPress 's' for save \nPress 'e' for exit");
	printf("\nEnter your choice:");
	scanf("%c",&ch);
	switch (ch)
	{
		case 's':
			printf("You want to save file?");
			break;
		case 'o':
			printf("You want to Open file?");
			break;
		case 'e':
			exit (0);
		default:
			printf("Wrong choice entered.");
	}
}
