/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 22:05:37 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:16:12 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class Tp>
void
iter(Tp* array, int array_size, void (*fct)(const Tp&))
{
	if (!fct)
		return ;
	for (int i = 0; i < array_size; i++)
		fct(array[i]);
}

#endif /* ITER_HPP */
