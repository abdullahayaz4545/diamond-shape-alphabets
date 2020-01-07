#include <stdio.h>
int main() {
	

		char c;
		//char original;// this is taken from the user tellinhg us at the end
		char original = 'Z';
		printf("\n\nEnter the Character: ");
		scanf_s("%c", &original);
		

		int c2 = original;
		char c3;
		char c4 = 'F';
		int space = 0;
		int pr = 0;

		int s3 = 0;
		int s2 = 'A';

		// variables for bottom side
		while (1)
		{
			for (c = 'A'; c <= c2; ++c)
				printf("%c ", c);
			//this lopp is for the diamond shape of the figure
			for (pr = 0; pr < space; pr++)
			{
				printf("    ");
			}
			space++;
			for (c3 = c2; c3 >= 'A'; c3 = c3 - 1)
				printf("%c ", c3);
			printf("\n");
			c2 = c2 - 1;

			if (space == original - 'A')
			{
				break;
			}

		}
		while (1){

			for (c = 'A'; c <= c2; c++)
			{
				printf("%c ", c);
				//this lopp is for the diamond shape of the figure

			}
			c2++;


			for (pr = 0; pr < space; pr++)
			{
				printf("    ");
			}

			space--;
			for (c4 = c - 1; c4 <= c2 + 1; c4--)
			{
				if (c4 == '@')
				{
					break;
				}
				printf("%c ", c4);
				//this lopp is for the diamond shape of the figure
				if (c4 < 'A')
				{
					break;
				}


			}
			printf("\n");
			if (c2 >= original + 1)

			{


				break;
			}

			s2++;
			s3++;
		}
	
	return 0;
}

