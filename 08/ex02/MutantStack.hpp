/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:12:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/04/05 15:59:59 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		/* construct/copy/destroy*/
		MutantStack(void) {}
		~MutantStack(void) {}
		MutantStack(const MutantStack<T> &src) {*this = src;}

		MutantStack<T>	&	operator=(const MutantStack<T> &rhs) {
			std::stack<T>::operator=(rhs);
			return (*this);
		}

		/* iterators */
		iterator			begin(void)			{return (this->c.begin());}
		const_iterator		begin(void)	const	{return (this->c.begin());}
		iterator			end(void)			{return (this->c.end());}
		const_iterator		end(void)	const	{return (this->c.end());}

};

#endif /* MUTANT_STACK_HPP */
