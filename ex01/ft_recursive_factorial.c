/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:10:16 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 12:49:57 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_recursive_factorial(int nb)
{
	if((nb > 0 && nb <= 12))
			return(nb = nb * ft_recursive_factorial(nb - 1));
	else if(nb == 0)
		return(1);
	else
		return(0);
}

/*int main()
{
	ft_recursive_factorial(42);
	printf("%d\n", ft_recursive_factorial(5));
	return(0);
*\	}
