/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:12:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/22 18:54:03 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {
			return ;
		}

		MutantStack(const MutantStack<T> &src) {
			*this = src;
			return ;
		}

		MutantStack<T>	& operator=(const MutantStack<T> &) {
			return (*this);
		}

		~MutantStack(void) {
			return ;
		}
		
		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin(void) {
			return (this->c.begin());
		}

		iterator	end(void) {
			return (this->c.end());
		}
};

#endif /* !defined MUTANT_STACK_HPP */
