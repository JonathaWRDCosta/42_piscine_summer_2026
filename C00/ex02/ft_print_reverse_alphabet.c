/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:03:03 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/02 17:45:51 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
