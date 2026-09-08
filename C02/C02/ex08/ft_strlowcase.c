/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 18:18:15 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 20:29:09 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (start);
}
