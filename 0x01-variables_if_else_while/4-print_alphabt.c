#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */
int main(void)

{
char alpahabet;

for (alphabet = 'a'; alphabet <= 'Z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');

return (0);

}
