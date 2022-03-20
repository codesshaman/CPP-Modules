/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ugdaniel <ugdaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 20:43:35 by ugdaniel          #+#    #+#             */
/*   Updated: 2022/03/20 20:55:36 by ugdaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <assert.h>

struct Data
{
	int		x;
};

uintptr_t	serialize(struct Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<struct Data *>(raw));
}

int	main(void)
{
	struct Data	d;
	struct Data	*ptr;
	struct Data	*new_ptr;
	uintptr_t	raw;

	ptr = &d;
	raw = serialize(ptr);
	new_ptr = deserialize(raw);
	assert(ptr == new_ptr);
	return (0);
}
