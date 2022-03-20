/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:37 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/20 22:13:38 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *array, int array_size, void (*fct)(const T &))
{
	int		i;

	for (i = 0; i < array_size; i++)
		fct(array[i]);
}

#endif /* !defined ITER_HPP */
