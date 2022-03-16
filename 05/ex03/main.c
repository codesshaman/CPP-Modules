#include <stdlib.h>
#include <stdio.h>

void	print(void)
{
	printf("salut\n");
}

void	print2(void)
{
	printf("hello\n");
}

void	lol(void (*f)(void))
{
	f();
}

int	main(void)
{
	void	(*f)(void);

	f = &print;
	lol(f);
	f = &print2;
	lol(f);
	return (0);
}
