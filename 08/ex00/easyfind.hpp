/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:10:37 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/06/02 15:19:26 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class Tp>
typename Tp::iterator
easyfind(Tp& container, int nb)
{
	return (std::find(container.begin(), container.end(), nb));
}

#endif /* EASYFIND_HPP */
