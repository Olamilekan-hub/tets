#include "shell.h"

/**
 * get_sigint - The function handles the crtl + c call for this prompt
 * @sig: Handler signal
 */
void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}
