/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 23:59:31 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/08 00:27:35 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while (*s1 == *s2 && *s1 != '\0' && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return(0);
    return(*s1 - *s2);
}

/*
int main(void)
{
    printf("%d\n", ft_strncmp("abcabcabcabc", "abcabcabcabc", 2));
    printf("%d\n", ft_strncmp("bbcabcabcabc", "abcabfabcabc", 0));
    printf("%d\n", ft_strncmp("cdcabcabcabc", "abcabcabcabc", 1));
}
*/