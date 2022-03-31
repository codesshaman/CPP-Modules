/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:25:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/31 12:06:21 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>
const T	&min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
const T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif /* WHATEVER_HPP */
