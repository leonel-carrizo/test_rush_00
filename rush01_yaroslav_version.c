#include <unistd.h>

void    ft_putchar(char c);
void    ft_print_row(char x, char first_char, char mid_char, char last_char);

void    rush(int x, int y)
{
        char    row;

        row = 1;
        while (row <= y)
        {
                if (row == 1)
                {
                        ft_print_row(x, '/', '*', '\\');
                }
                else if (row < y)
                {
                        ft_print_row(x, '*', ' ', '*');
                }
                else if (row == y)
                {
                        ft_print_row(x, '\\', '*', '/');
                }
                write(1, "\n", 1);
                row++;
        }
}

void    ft_print_row(char x, char first_char, char mid_char, char last_char)
{
        char    row_char;

        row_char = 1;
        while (row_char <= c)
        {
                if (row_char == 1)
                {
                        ft_putchar(first_char);
                }
                else if (row_char < x)
                {
                        ft_putchar(mid_char);
                }
                else if (row_char == x)
                {
                        ft_putchar(last_char);
                }
                row_char++;
        }
}
