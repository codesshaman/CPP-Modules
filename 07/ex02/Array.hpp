/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:50:08 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/05/30 15:57:37 by ugdaniel         ###   ########.fr       */
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
	Tp*          _begin;
	unsigned int _size;

public:
	Array()
		: _begin(0), // NULL
		  _size(0)
	{	
	}
	
	~Array<Tp>()
	{
		if (_begin)
			delete [] _begin;
	}

	Array(unsigned int array_size);
	Array(const Array &src);
	Array& operator=(const Array& x);
	Tp& operator[](const unsigned int index) const;

	

	unsigned int size() const
		{return _size;}
};

template <class Tp>
Array<Tp>::Array(unsigned int array_size)
	: _size(array_size)
{
	_begin = new Tp[array_size];
}

template <class Tp>
Array<Tp>::Array(const Array& x)
	: _size(x._size)
{
	_begin = new Tp[x._size];
	for (_size = 0; _size < x._size; _size++)
		_begin[_size] = x._begin[_size];
	return *this;
}

template <class Tp>
Array<Tp>&
Array<Tp>::operator=(const Array<Tp>& x)
{
	if (this != &x)
	{
		if (_begin)
			delete [] _begin;
		_begin = new Tp[x._size];
		for (_size = 0; _size < x._size; _size++)
			_begin[_size] = x._begin[_size];
	}
	return *this;
}

template <class Tp>
Tp&
Array<Tp>::operator[](const unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("array");
	return _begin[index];
}

#endif /* ARRAY_HPP */
