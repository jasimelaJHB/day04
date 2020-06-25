/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:42:15 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 12:55:12 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

/*void ft_putchar(char c)
{
	write(1, &c, 1);
}
*/ 
int ft_iterative_factorial(int nb)
{
	int i;
	int fact;
	int num = nb;

	fact = 1;
	if(nb <= 0)
		fact = 1;
	else
	{
		i = 1;
		while(i <= nb)
		{
			fact = fact * i;
			putchar(i++);
		}
	}
	return fact;
}

/*int main()
{
	int num;
	num = ft_iterative_factorial(10);
	printf("%d\n", ft_iterative_factorial(3));
	return (0);
\*}
