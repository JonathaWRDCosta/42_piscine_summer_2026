/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 01:12:48 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/08 01:23:04 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return(i);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int dest_len;
    unsigned int i;
    
    dest_len = ft_strlen(dest);
    i = 0;
    while (*src && i < nb)
    {
        dest[dest_len + i] = *src;
        src++;
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest);
}
/*
int main()
{
    char str1[10] = "Hello";
    char str2[] = " World!";

    printf("Concatenating the first 3 characters of str2 into str1:\n");
    ft_strncat(str1, str2, 3);
    printf("Resulting str1 = \"%s\"\n", str1);

    return 0;
}
*/