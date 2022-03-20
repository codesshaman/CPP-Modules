/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:25:20 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/20 22:03:43 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined WHATEVER_HPP
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

#endif /* !defined WHATEVER_HPP */
