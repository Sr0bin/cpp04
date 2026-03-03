/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:07:24 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 16:12:05 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor called.\n";
	_type = "Dog";
}

Dog::Dog(std::string type)
{
	(void) type;
	std::cout << "Paramatrized Dog Constructor called.\n";
	_type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy Constructor called.\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment Constructor called.\n";
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Default Dog Destructor called.\n";
}

void	Dog::makeSound() const
{
	std::cout << "Bark bark!\n";
}
