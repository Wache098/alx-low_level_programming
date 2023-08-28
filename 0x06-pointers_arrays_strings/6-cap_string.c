#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_separator - Check if a character is a word separator
 * @c: The character to check
 *
 * Return: true if the character is a separator, false otherwise
 */
bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;
    for (i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return true;
        }
    }
    return false;
}

char *cap_string(char *str)
{
    bool new_word = true;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (is_separator(str[i]))
        {
            new_word = true;
        }
        else if (new_word)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - ('a' - 'A');
            }
            new_word = false;
        }
    }

    return str;
}
