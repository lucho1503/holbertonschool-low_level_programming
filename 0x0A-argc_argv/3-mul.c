#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
			   printf("%d\n", mul);
	}
	return (0);
	
}
