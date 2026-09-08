/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 12:22:12 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 15:21:55 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 999;
	b = 777;

	printf("Value of A and B before call the funcion: A %d B %d\n", a, b);
	ft_swap(&a, &b);
	printf("Value of A and B after cal the function: A %d B %d\n", a, b);
}
