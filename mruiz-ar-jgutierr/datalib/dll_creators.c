/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_creators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/23 11:55:26 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief   Creates a new node with the given data.
 *
 * @param data  Pointer to the data to be stored in the node.
 *
 * @return  Pointer to the new node.
 */
t_dlist	*dll_new(void *data)
{
	t_dlist	*new;

	new = (t_dlist *) malloc(sizeof(t_dlist));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	dll_add_first(t_dlist **list, t_dlist *elem)
{
	// TODO
}

void	dll_add_after(t_dlist *elem, t_dlist *new)
{
	// TODO
}

void	dll_add_last(t_dlist **list, t_dlist *elem)
{
	// TODO
}

t_dlist	*dll_replace(t_dlist **list, void *old, void *new)
{
	// TODO
}
