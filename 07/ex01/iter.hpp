/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:37 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/02 14:58:47 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class Tp>
void
iter(Tp* array, unsigned int array_size, void (*fct)(const Tp&))
{
	if (!array || !array_size || !fct)
		return ;
	for (unsigned int i = 0; i < array_size; i++)
		fct(array[i]);
}

#endif /* ITER_HPP */
