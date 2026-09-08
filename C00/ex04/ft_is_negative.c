/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:06:45 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/03 12:52:54 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int main(void)
{
	ft_is_negative(1);
	write(1, "\n", 1);
	ft_is_negative(2);
        write(1, "\n", 1);
        ft_is_negative(3);
        write(1, "\n", 1);
        ft_is_negative(5);
        write(1, "\n", 1);
        ft_is_negative(-10);
        write(1, "\n", 1);
        ft_is_negative(1);
        write(1, "\n", 1);
        ft_is_negative(100);
        write(1, "\n", 1);
        ft_is_negative(0);
        write(1, "\n", 1);
        ft_is_negative(-90);
        write(1, "\n", 1);
        ft_is_negative(0);
        write(1, "\n", 1);

}
*/
