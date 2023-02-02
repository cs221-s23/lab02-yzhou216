#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc == 2) {
		printf("invalid arguments\n");
		return 0;
	}
	char *str = argv[1];
	char *expression = argv[2];
	int expression_len = strlen(expression);
	int count = 0;
	char *where = str;
	if (expression_len) {
		while ((where = strstr(where, expression))) {
			where += expression_len;
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
