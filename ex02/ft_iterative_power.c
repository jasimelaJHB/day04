/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:02:39 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 14:25:28 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <math.h>

int ft_iterative_power(int nb,int power);
{
	int i;
	int res;

	if(power < 0)
		return(0);
		res = 1;
		i = 0;

		while( i < power)
		{
			res = res * nb;
			i++;
		}
		return(res);
}
