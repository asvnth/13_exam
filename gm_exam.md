Level 0: Basics
ft_print_alphabet

    Subject: Display the alphabet in lowercase on a single line in ascending order, starting with 'a', followed by a newline.

C

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        ft_putchar(c);
        c++;
    }
    ft_putchar('\n');
}

ft_print_reverse_alphabet

    Subject: Display the alphabet in lowercase in descending order, starting with 'z', followed by a newline.

C

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
    ft_putchar('\n');
}

ft_print_numbers

    Subject: Display all digits on a single line in ascending order, followed by a newline.

C

void ft_print_numbers(void)
{
    char c = '0';
    while (c <= '9')
    {
        ft_putchar(c);
        c++;
    }
    ft_putchar('\n');
}

ft_print_comb

    Subject: Display all unique combinations of three different digits in ascending order (e.g., 012, 013, ..., 789).

C

void ft_print_comb(void)
{
    char a = '0';
    char b;
    char c;

    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

ft_print_comb2

    Subject: Display all combinations of two two-digit numbers (from 00 01 to 98 99).

C

void ft_print_comb2(void)
{
    int a = 0;
    int b;

    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar((a / 10) + '0');
            ft_putchar((a % 10) + '0');
            ft_putchar(' ');
            ft_putchar((b / 10) + '0');
            ft_putchar((b % 10) + '0');
            if (!(a == 98 && b == 99))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
}

aff_first_param

    Subject: Program that takes command-line arguments and displays its first argument followed by a newline. If no arguments, display \n.

C

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        while (argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

aff_last_param

    Subject: Program that displays its last command-line argument followed by a newline.

C

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        while (argv[argc - 1][i])
        {
            write(1, &argv[argc - 1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}

ft_is_negative

    Subject: Displays 'N' if the integer passed as parameter is negative, 'P' if it is positive or null.

C

void ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}

ft_boring_alphabet

    Subject: A variation variants use where you might print only specific slices or test custom mock structural patterns. Here is the standard baseline: print the alphabet without using a loop (recursion variant often asked to test logic).

C

void ft_boring_alphabet(char c)
{
    if (c > 'z')
        return;
    ft_putchar(c);
    ft_boring_alphabet(c + 1);
}

Level 1: Basic String Functions
ft_strlen

    Subject: Counts and returns the number of characters in a string.

C

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

ft_strcpy

    Subject: Copies the string src into dest, including the terminating null byte.

C

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

ft_strcmp

    Subject: Compares two strings lexicographically and returns the difference of the first mismatch.

C

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

ft_strdup

    Subject: Allocates memory dynamic size using malloc and replicates the string content.

C

#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    char *dest;

    while (src[i])
        i++;
    dest = (char *)malloc(sizeof(char) * (i + 1));
    if (!dest)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

ft_str_is_alpha

    Subject: Returns 1 if the string contains only alphabetical characters, and 0 otherwise. Returns 1 if string is empty.

C

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
        i++;
    }
    return (1);
}

ft_str_is_numeric

    Subject: Returns 1 if string contains only numerical digits, 0 otherwise.

C

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}

ft_str_is_lowercase / ft_str_is_uppercase / ft_str_is_printable
C

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
        i++;
    }
    return (1);
}

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}

int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!(str[i] >= 32 && str[i] <= 126))
            return (0);
        i++;
    }
    return (1);
}

ft_strupcase / ft_strlowcase  

    Subject: Transform every letter to uppercase / lowercase.

C

char *ft_strupcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

char *ft_strlowcase(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

ft_strcapitalize

    Subject: Capitalizes the first letter of every word, turning the rest into lowercase. A word is an alphanumeric sequence.

C

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (new_word)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                    str[i] -= 32;
                new_word = 0;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
        }
        else
        {
            new_word = 1;
        }
        i++;
    }
    return (str);
}

Level 2: Recursion / Math
ft_iterative_factorial / ft_recursive_factorial

    Subject: Returns the factorial of the number. If inputs are stable bounds < 0 or > 12 (avoiding standard int overflow), handling edge values.

C

int ft_iterative_factorial(int nb)
{
    int res = 1;
    if (nb < 0 || nb > 12)
        return (0);
    while (nb > 0)
    {
        res *= nb;
        nb--;
    }
    return (res);
}

int ft_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}

ft_iterative_power / ft_recursive_power  

    Subject: Return power value. Negative power returns 0. 0^0 returns 1.

C

int ft_iterative_power(int nb, int power)
{
    int res = 1;
    if (power < 0)
        return (0);
    while (power > 0)
    {
        res *= nb;
        power--;
    }
    return (res);
}

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_recursive_power(nb, power - 1));
}

ft_fibonacci

    Subject: Returns the n-th element of the Fibonacci sequence. Negative index returns -1.

C

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if (index == 1)
        return (1);
    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

ft_sqrt

    Subject: Returns the irrational/integer square root if it exists, else returns 0.

C

int ft_sqrt(int nb)
{
    int i = 1;
    if (nb <= 0)
        return (0);
    while (i <= nb / i)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

ft_is_prime / ft_find_next_prime
C

int ft_is_prime(int nb)
{
    int i = 2;
    if (nb <= 1)
        return (0);
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb <= 2)
        return (2);
    while (!ft_is_prime(nb))
        nb++;
    return (nb);
}

The Eight Queens

    Subject: Count or display all configurations of placing 8 queens on an 8x8 chessboard without threats. Here is the standard version returning the total configuration count.

C

int is_safe(int board[8], int row, int col)
{
    int i = 0;
    while (i < row)
    {
        if (board[i] == col || 
            board[i] - i == col - row || 
            board[i] + i == col + row)
            return (0);
        i++;
    }
    return (1);
}

void solve_queens(int board[8], int row, int *count)
{
    int col = 0;
    if (row == 8)
    {
        (*count)++;
        return;
    }
    while (col < 8)
    {
        if (is_safe(board, row, col))
        {
            board[row] = col;
            solve_queens(board, row + 1, count);
        }
        col++;
    }
}

int ft_eight_queens_puzzle(void)
{
    int board[8];
    int count = 0;
    solve_queens(board, 0, &count);
    return (count);
}

Level 3: Arrays / Conversions
ft_atoi

    Subject: Converts string numeric formats with signs and spaces into integer equivalents.

C

int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

ft_putstr_non_printable

    Subject: Prints non-printable characters as hex representations prefixed with \.

C

#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    char *hex = "0123456789abcdef";

    while (str[i])
    {
        if (str[i] >= 32 && str[i] <= 126)
        {
            write(1, &str[i], 1);
        }
        else
        {
            write(1, "\\", 1);
            write(1, &hex[((unsigned char)str[i]) / 16], 1);
            write(1, &hex[((unsigned char)str[i]) % 16], 1);
        }
        i++;
    }
}

ft_ultimate_div_mod / ft_swap
C

void ft_ultimate_div_mod(int *a, int *b)
{
    int tmp_a = *a;
    int tmp_b = *b;

    if (tmp_b != 0)
    {
        *a = tmp_a / tmp_b;
        *b = tmp_a % tmp_b;
    }
}

void ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

sort_int_tab / ft_rev_int_tab
C

void sort_int_tab(int *tab, int size)
{
    int i = 0;
    int tmp;
    while (i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
}

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int tmp;
    while (i < size / 2)
    {
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
        i++;
    }
}

ft_range

    Subject: Allocates dynamic memory buffer containing sequential numbers spanning min up to max (excluding max).

C

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i = 0;
    int size;

    if (min >= max)
        return (NULL);
    size = max - min;
    range = (int *)malloc(sizeof(int) * size);
    if (!range)
        return (NULL);
    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return (range);
}

ft_atoi_base

    Subject: Converts string content mapped from structural radix layouts down to integers.

C

int check_base(char *base)
{
    int i = 0;
    int j;

    if (!base[0] || !base[1])
        return (0);
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (i);
}

int get_nb(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    int base_len = check_base(base);

    if (base_len < 2)
        return (0);
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (get_nb(str[i], base) != -1)
    {
        res = res * base_len + get_nb(str[i], base);
        i++;
    }
    return (res * sign);
}

Level 4: Linked Lists / Harder Algos
Structure Definition for Lists

When building list structures locally, assume standard 42 logic patterns:
C

typedef struct s_list
{
    void            *data;
    struct s_list   *next;
}               t_list;

sort_list

    Subject: Sorts the list elements using a functional pointer comparison tracker ascending logic.

C

t_list *sort_list(t_list *lst, int (*cmp)(void *, void *))
{
    t_list *start = lst;
    void *tmp;

    if (!lst)
        return (NULL);
    while (lst->next)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = start;
        }
        else
        {
            lst = lst->next;
        }
    }
    return (start);
}

ft_split

    Subject: Splits a character array string parsing tokens using whitespace match indicators into separate words arrays.

C

#include <stdlib.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if (str[i] && !is_space(str[i]))
        {
            count++;
            while (str[i] && !is_space(str[i]))
                i++;
        }
    }
    return (count);
}

char *malloc_word(char *str, int *index)
{
    int i = *index;
    int len = 0;
    char *word;

    while (str[i] && !is_space(str[i]))
    {
        len++;
        i++;
    }
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (str[*index] && !is_space(str[*index]))
    {
        word[i] = str[*index];
        (*index)++;
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str)
{
    char **res;
    int words = count_words(str);
    int i = 0;
    int r = 0;

    res = (char **)malloc(sizeof(char *) * (words + 1));
    if (!res)
        return (NULL);
    while (str[i])
    {
        while (str[i] && is_space(str[i]))
            i++;
        if (str[i] && !is_space(str[i]))
        {
            res[r] = malloc_word(str, &i);
            r++;
        }
    }
    res[r] = NULL;
    return (res);
}

ft_strjoin

    Subject: Joins an array of strings separated by a specific string component delimiter.

C

#include <stdlib.h>

int total_len(int size, char **strs, char *sep)
{
    int len = 0;
    int i = 0;
    int sep_len = 0;

    while (sep[sep_len])
        sep_len++;
    while (i < size)
    {
        int j = 0;
        while (strs[i][j])
        {
            len++;
            j++;
        }
        if (i < size - 1)
            len += sep_len;
        i++;
    }
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *res;
    int i = 0;
    int k = 0;

    if (size == 0)
    {
        res = malloc(sizeof(char));
        *res = '\0';
        return (res);
    }
    res = (char *)malloc(sizeof(char) * (total_len(size, strs, sep) + 1));
    if (!res)
        return (NULL);
    while (i < size)
    {
        int j = 0;
        while (strs[i][j])
            res[k++] = strs[i][j++];
        j = 0;
        if (i < size - 1)
        {
            while (sep[j])
                res[k++] = sep[j++];
        }
        i++;
    }
    res[k] = '\0';
    return (res);
}

Function-pointer based exercises (ft_list_foreach)

    Subject: Iterate across generic list configurations passing nodes processing actions down function tracks.

C

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while (list_ptr)
    {
        if (list_ptr->data)
            (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}
