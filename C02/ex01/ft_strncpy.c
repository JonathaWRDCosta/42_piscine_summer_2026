/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:42:41 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 23:30:34 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*start;

	start = dest;
	while (*src && n != '\0')
	{
		*start = *src;
		start++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*start = '\0';
		start++;
		n--;
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[];
	char	dest[10];

	src[] = "Hello";
	ft_strncpy(dest, src, 10);
	printf("src:  %s\n", src);
	printf("dest: %.*s\n", 3, dest);
}
*/
