/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibbonacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 11:06:58 by avasile           #+#    #+#             */
/*   Updated: 2017/08/20 11:10:09 by avasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index == 0)
		return (1);
	return (ft_fibbonacci(index - 1) + ft_fibbonacci(index - 2));
}
