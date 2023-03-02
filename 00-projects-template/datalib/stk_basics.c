/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_basics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgutierr <jgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/03/02 19:56:07 by jgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Creates a new element for the stack.
 *
 * @param data	The data to store in the element.
 *
 * @return	Pointer to the new element.
 */
t_stack	*stk_new(void *data)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	stk_push(t_stack **stack, void *data)
{
	// TODO
}

t_stack	*stk_pop(t_stack **stack)
{
	// TODO
}

void	stk_clear(t_stack **stack)
{
	// TODO
}
