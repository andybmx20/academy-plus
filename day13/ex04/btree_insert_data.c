/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 16:26:33 by avasile           #+#    #+#             */
/*   Updated: 2017/08/30 16:38:30 by avasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	btree_insert_data(
		t_btree **root,
		void *item,
		int (*cmpf)(void *, void *)
)
{
	t_btree *elem;

	if (!root)
	{
		root = malloc(sizeof(t_btree));
		root = item;
		return ;
	}
	elem = *root;
}
