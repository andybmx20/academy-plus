/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_nod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 14:41:24 by avasile           #+#    #+#             */
/*   Updated: 2017/08/30 14:49:57 by avasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->data = item;
	node->right = 0;
	node->left = 0;
	return (node);
}
