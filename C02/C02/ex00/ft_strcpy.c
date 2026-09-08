/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:17:45 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/05 15:39:21 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*src)
	{
		*start = *src;
		start++;
		src++;
	}
	*start = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[];
	char	dest[15];
	char	dest2[15];

	src[] = "Tropa do calvo";
	
	printf("Teste da funcao original\n");	
	printf("Valores de src e dest antes de chamar a funcao: src: %s | dest:
			%s\n", src, dest);
	strcpy(dest, src);
	printf("Valores de src e dest depois de chamar a funcao: src: %s | dest:
			%s\n", src, dest);
	printf("Teste da minha funcao\n");		
	printf("Valores de src e dest antes de chamar a funcao: src: %s | dest:
			%s\n", src, dest2);
	ft_strcpy(dest2, src);
	printf("Valores de src e dest depois de chamar a funcao: src: %s | dest:
			%s\n", src, dest2);
}
*/