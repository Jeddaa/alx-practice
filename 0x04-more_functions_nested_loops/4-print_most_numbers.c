#include "main.h"

/**
 * @brief 
 * 
 */

void print_most_numbers(void)
{
    int x = '0';
    while (x <= '9')
    {
        if (x != '2' && x != '4')
            _putchar(x);
        x++;
    }
    _putchar('\n');
}