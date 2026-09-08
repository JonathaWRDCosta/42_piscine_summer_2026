/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:28:05 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/08 01:12:28 by jonatha          ###   ########.fr       */
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
        str++;
        i++;
    }
    return(i);
}

char *ft_strcat(char *dest, char *src)
{
    int dest_len;
    int i;

    dest_len = ft_strlen(dest);
    i = 0;
    while (*src)
    {
        dest[dest_len + i] = *src;
        src++;
        i++;
    }
    dest[dest_len + i] = '\0';
    return(dest);
}

/*
int	main(void)
{
	char	str1[999] = "If you, if you could return\nDon't let it burn\nDon't let it fade\n";
	char	str2[] = "I'm sure I'm not being rude\nBut it's just your attitude\nIt's tearing me apart\nIt's ruining every day";
	char	*p;

	printf("\nConcatenating str1 = \n\"%s\"\n\nand str2 = \n\"%s\"", str1, str2);
	printf("\n\n--------------------------------------------------------\n");

	ft_strcat(str1, str2);

	printf("\nResulting str1 = \n\"");
	p = str1;
	while (*p)
	{
		while (*p == ' ' || *p == '\n')
		{
			printf("%c", *p);
			p++;
		}
		while (*p && *p != ' ' && *p != '\n')
		{
			printf("%c", *p);
			p++;
		}
		usleep(500000);
	}
	printf("\"\n");

	return (0);
}
*/