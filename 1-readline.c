#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - read inserted line and print it
 *
 * Return: 0 on success or -1 on fail.
 */
int main(void)
{
char *l = NULL;
size_t k = 0;
ssize_t n;

write(STDIN_FILENO, "$ ", 2);
n = getline(&l, &k, stdin);
if (n > 0)
write(STDOUT_FILENO, l, n);
else
write(STDOUT_FILENO, "\n", 1);
free(l);
if (n == -1)
return (-1);

return (0);
}
