/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:50:08 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/16 21:27:52 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept> // std::out_of_range

template <class Tp>
class Array
{
private:
	Tp*          _array;
	unsigned int _array_size;

public:
	Array() : _array(nullptr), _array_size(0) {}
	Array(unsigned int array_size);
	Array(const Array &src);
	Array& operator=(const Array& x);
	Tp& operator[](const unsigned int index) const;
	~Array<Tp>() {}

	unsigned int size() const {return (this->_array_size);}
};

template <class Tp>
Array<Tp>::Array(unsigned int array_size)
	: _array_size(array_size)
{
	this->_array = new Tp[array_size];
}

template <class Tp>
Array<Tp>::Array(const Array& x)
	: _array_size(x._array_size)
{
	*this = x;
}

template <class Tp>
Array<Tp>&
Array<Tp>::operator=(const Array<Tp>& x)
{
	unsigned int	i;

	if (this == &x)
		return (*this);
	if (this->_array && this->_array_size)
		delete [] this->_array;
	this->_array_size = x._array_size;
	this->_array = new Tp[this->_array_size];
	for (i = 0; i < x._array_size; i++)
		this->_array[i] = x._array[i];
	return (*this);
}

template <class Tp>
Tp&
Array<Tp>::operator[](const unsigned int index) const
{
	if (index >= this->_array_size)
		throw (std::out_of_range("array"));
	return _array[index];
}

#endif /* ARRAY_HPP */
