/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgutierr <jgutierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/03/02 19:57:38 by jgutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the stack is empty.
 *
 * @param stack	Pointer to the stack.
 *
 * @return	1 if the stack is empty;
 * 			0 otherwise.
 */
int	stk_empty(t_stack *stack)
{
	return (stack == NULL);
}

int	stk_size(t_stack *stack)
{
	// TODO
}

t_stack	*stk_top(t_stack *stack)
{
	// TODO
}

void	*stk_peek(t_stack *stack)
{
	// TODO
}
