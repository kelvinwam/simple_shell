#include "main.h"

/**
 * main - funciom
 * @ac: Not used
 * @av: Not used
 * Return: the loop.
 **/
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
