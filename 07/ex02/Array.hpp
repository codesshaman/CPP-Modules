/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:50:08 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/21 19:23:48 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept> // std::out_of_range

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_array_size;
	public:
		Array<T>(void): _array(nullptr), _array_size(0) {
			return ;
		};

		Array<T>(unsigned int array_size): _array_size(array_size) {
			this->_array = new T[array_size];
		}

		Array<T>(const Array<T> &src): _array_size(src._array_size)	{
			*this = src;
		}

		Array<T>		& operator=(const Array<T> &rhs)
		{
			unsigned int	i;

			if (this == &rhs)
				return (*this);
			if (this->_array && this->_array_size)
				delete [] this->_array;
			this->_array_size = rhs._array_size;
			this->_array = new T[this->_array_size];
			for (i = 0; i < rhs._array_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}
		
		T				& operator[](const unsigned int index) const
		{
			if (index >= this->_array_size)
				throw (std::out_of_range("Index out of range"));
			return (this->_array[index]);
		}

		~Array<T>(void) {
			return ;
		}

		unsigned int	size(void) const {
			return (this->_array_size);
		}
};

#endif /* !defined ARRAY_HPP */
