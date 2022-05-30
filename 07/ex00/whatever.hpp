/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:25:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 15:06:35 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <class Tp>
void
swap(Tp& a, Tp& b)
{
	Tp c = a;
	a = b;
	b = c;
}

template <class Tp>
const Tp&
min(const Tp &a, const Tp &b)
{
	return (a < b ? a : b);
}

template <class Tp>
const Tp&
max(const Tp& a, const Tp& b)
{
	return (a > b ? a : b);
}

#endif /* WHATEVER_HPP */
