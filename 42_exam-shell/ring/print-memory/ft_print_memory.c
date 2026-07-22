/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmelamr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 18:29:38 by ahmelamr          #+#    #+#             */
/*   Updated: 2026/07/19 20:56:08 by ahmelamr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void    print_hex(unsigned char c)
{
    char *hex = "0123456789abcdef";

    write(1, &hex[c / 16], 1);
    write(1, &hex[c % 16], 1);
}

void    print_ascii(unsigned char *ptr, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (ptr[i] >= 32 && ptr[i] <= 126)
            write(1, &ptr[i], 1);
        else
            write(1, ".", 1);
        i++;
    }
}

void    print_memory(const void *addr, size_t size)
{
    unsigned char   *ptr;
    size_t          i;
    size_t          j;

    ptr = (unsigned char *)addr;
    i = 0;
    while (i < size)
    {
        j = 0;

        // Print hex bytes
        while (j < 16)
        {
            if (i + j < size)
                print_hex(ptr[i + j]);
            else
                write(1, "  ", 2);

            if (j % 2)
                write(1, " ", 1);

            j++;
        }

        // Print ASCII
        print_ascii(ptr + i, (size - i < 16) ? size - i : 16);
        write(1, "\n", 1);

        i += 16;
    }
}
