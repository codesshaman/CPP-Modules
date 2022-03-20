/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:01:52 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/20 21:22:43 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base	*generate(void)
{
	int		n = (rand() % 3) + 1;

	std::cout << "n is " << n << std::endl;
	if (n == 1)
		return (new A());
	if (n == 2)
		return (new B());
	return (new C());
}

void	identify(Base &p)
{
	std::cout << "by ref: ";
	try {
		A	&a = dynamic_cast<A &>(p);
		std::cout << "object type is A" << std::endl;
		(void)a;
	}
	catch (std::exception){}
	try {
		B	&b = dynamic_cast<B &>(p);
		std::cout << "object type is B" << std::endl;
		(void)b;
	}
	catch (std::exception){}
	try {
		C	&c = dynamic_cast<C &>(p);
		std::cout << "object type is C" << std::endl;
		(void)c;
	}
	catch (std::exception){}
}

void	identify(Base *p)
{
	A	*a;
	B	*b;
	C	*c;

	std::cout << "by ptr: ";
	if ((a = dynamic_cast<A *>(p)))
		std::cout << "object type is A" << std::endl;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << "object type is B" << std::endl;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << "object type is C" << std::endl;
}

int	main(void)
{
	Base	*base;

	srand(time(NULL));

	base = generate();
	identify(base);
	identify(*base);

	delete (base);

	return (0);
}
