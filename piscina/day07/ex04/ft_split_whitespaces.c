/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 15:35:37 by avasile           #+#    #+#             */
/*   Updated: 2017/08/24 21:00:10 by avasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_nb_words(char *str)
{
	int i;
	int nb_word;
	int flag_space;
	int flag_word;

	i = 0;
	nb_word = 0;
	flag_space = 1;
	flag_word = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !flag_word)
		{
			flag_word = 1;
			flag_space = 0;
			nb_word++;
		}
		if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && !flag_space)
		{
			flag_word = 0;
			flag_space = 1;
		}
		i++;
	}
	return (nb_word);
}

int		get_location(int i, char *str, int tab[])
{
	int flag_space;
	int flag_word;
	int beg;

	beg = 0;
	flag_space = 1;
	flag_word = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && !flag_word)
		{
			flag_word = 1;
			beg = i;
			while (str[i] != ' ' && str[i] != '\n'
				&& str[i] != '\t' && str[i] != '\0')
				i++;
			tab[0] = (i - beg);
			break ;
		}
		i++;
	}
	return (beg);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	int		tab[1];
	char	**tab_str;

	i = 0;
	tab_str = (char**)malloc(sizeof(char*) * (get_nb_words(str) + 1));
	while (i < get_nb_words(str))
	{
		k = 0;
		j = get_location(j, str, tab);
		tab_str[i] = (char*)malloc(sizeof(char) * (tab[0] + 1));
		while (k < tab[0])
		{
			tab_str[i][k] = str[j++];
			k++;
		}
		i++;
	}
	tab_str[get_nb_words(str) + 1] = 0;
	return (tab_str);
}
