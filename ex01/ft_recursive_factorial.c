/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasimela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 10:10:16 by jasimela          #+#    #+#             */
/*   Updated: 2020/06/25 15:33:13 by jasimela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if((nb > 0 && nb <= 12))
			return(nb = nb * ft_recursive_factorial(nb - 1));
	else if(nb == 0)
		return(1);
	else
		return(0);
}
