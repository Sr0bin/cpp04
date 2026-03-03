/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:07:24 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 17:59:47 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog Constructor called.\n";
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(std::string type)
{
	(void) type;
	std::cout << "Paramatrized Dog Constructor called.\n";
	_type = "Dog";
}

Dog::Dog(const Dog &other) : _brain(NULL)
{
	std::cout << "Dog Copy Constructor called.\n";
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assignment Constructor called.\n";
	if (this != &other)
	{
		delete _brain;
		Animal::operator=(other);
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called.\n";
	delete _brain;
}

Brain *Dog::getBrain()
{
	return (_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Bark bark!\n";
}
