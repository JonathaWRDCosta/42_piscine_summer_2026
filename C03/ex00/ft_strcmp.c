/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:49:39 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 23:56:31 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while (*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }
    return(*s1 - *s2);
}
/*
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hellp";

    printf("%d\n", ft_strcmp(str1, str2));
}
*/