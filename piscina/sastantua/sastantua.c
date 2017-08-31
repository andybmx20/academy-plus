/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:11:59 by avasile           #+#    #+#             */
/*   Updated: 2017/08/20 16:45:20 by avasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	sastantua(int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		ft_putchar('/');
		while (j <= i)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		i++;
		ft_putchar('\n');
	}	
}
