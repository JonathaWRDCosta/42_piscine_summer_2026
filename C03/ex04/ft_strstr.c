/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 01:28:22 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/08 01:47:54 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	needle_in_haystack(char *haystack, char *needle)
{
	while (*needle)
	{
		if (*needle != *haystack)
			return (0);
		needle++;
        haystack++;
	}	
	return (1);
}

char *ft_strstr(char *str, char *to_find)
{
    char *start;

    if (*to_find == '\0')
        return(str);
    while (*str)
    {
        if (*str == *to_find)
        {
            start = str;
            if (needle_in_haystack(start, to_find))
                return(start);
        }
        str++;
    }
    return (0);
}
/*
int main()
{
    char needle[] = "5";
    char haystack[] = "1, 2, 3, 4, 5.";

    printf("Searching for the needle (\"%s\") in the haystack (\"%s\"):\n", needle, haystack);

    char *res = ft_strstr(haystack, needle);
    if (res)
    {
        printf("Found the needle at position: %ld\n", res - haystack);
        printf("Substring: %s\n", res);
    }
    else
    {
        printf("Needle (\"%s\") not found in haystack (\"%s\")\n", needle, haystack);
    }

    return 0;
}*/