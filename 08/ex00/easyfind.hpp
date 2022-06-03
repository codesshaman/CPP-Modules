/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:10:37 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/03 15:43:42 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class T>
typename T::iterator
easyfind(T& container, int nb)
{
	return (std::find(container.begin(), container.end(), nb));
}

#endif /* EASYFIND_HPP */
