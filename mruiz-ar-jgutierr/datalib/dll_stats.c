/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ar <mruiz-ar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/03/02 19:31:58 by mruiz-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the list is empty.
 * @param list	Pointer to the first element of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int	dll_empty(t_dlist *list)
{
	return (list == NULL);
}

int	dll_size(t_dlist *list)
{
	// TODO
}

t_dlist	*dll_first(t_dlist *list)
{
	// TODO
}

t_dlist	*dll_last(t_dlist *list)
{
	// TODO
}

t_dlist	*dll_search(t_dlist *list, void *data)
{
	// TODO
}
