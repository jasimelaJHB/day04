/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 09:42:15 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 14:39:51 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
