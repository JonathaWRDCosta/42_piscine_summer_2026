/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:05:13 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 16:02:50 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
    printf("%d\n", ft_str_is_numeric("123"));
    printf("%d\n", ft_str_is_numeric("12a"));
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("abc"));
    printf("%d\n", ft_str_is_numeric(" "));
    return(0);
}
    */