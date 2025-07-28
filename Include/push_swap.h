/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:46:36 by juan              #+#    #+#             */
/*   Updated: 2025/07/28 16:16:40 by juan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H 

# include <limits.h>

typedef struct  stack
{
    int data;
    struct  stack   *next;
}               t_stack;

typedef struct push_swap
{
    t_stack *a;
    t_stack *b;
}               t_push_swap;

typedef struct strlst
{
    char    *data;
    struct  strlst  *next;
}               t_strlst;
