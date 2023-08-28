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
    for (int i = 0; separators[i]; i++)
    {
        if (c == separators[i])
        {
            return true;
        }
    }
    return false;
}

/**
 * cap_string - Capitalize all words of a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
    bool new_word = true; // Flag to indicate the start of a new word

    for (int i = 0; str[i]; i++)
    {
        if (is_separator(str[i]))
        {
            new_word = true; // Separator indicates a new word can start
        }
        else if (new_word)
        {
            // Capitalize the current character if it's a lowercase letter
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - ('a' - 'A');
            }
            new_word = false; // Set the flag to false after capitalization
        }
    }

    return str;
}
