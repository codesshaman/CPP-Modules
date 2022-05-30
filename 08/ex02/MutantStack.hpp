/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:12:36 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 17:10:39 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <stack>

template <class Tp>
class MutantStack : public std::stack<Tp>
{
public:
	typedef typename
		std::stack<Tp>::container_type::iterator       iterator;
	typedef typename
		std::stack<Tp>::container_type::const_iterator const_iterator;

	MutantStack(void)
	{
	}

	~MutantStack(void)
	{
	}

	MutantStack(const MutantStack& src)
	{
		*this = src;
	}

	MutantStack& operator=(const MutantStack& x)
	{
		std::stack<Tp>::operator=(x);
		return *this;
	}

	iterator       begin(void)
		{return (this->c.begin());}
	const_iterator begin(void) const
		{return (this->c.begin());}
	iterator       end(void)
		{return (this->c.end());}
	const_iterator end(void)   const
		{return (this->c.end());}
};

#endif /* MUTANT_STACK_HPP */
