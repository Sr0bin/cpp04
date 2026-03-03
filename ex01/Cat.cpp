/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:02:18 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 18:09:29 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor called.\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(std::string type)
{
	(void) type;
	std::cout << "Paramatrized Cat Constructor called.\n";
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other) : _brain(NULL)
{
	std::cout << "Cat Copy Constructor called.\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment Constructor called.\n";
	if (this != &other)
	{
		delete _brain;
		Animal::operator=(other);
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Brain *Cat::getBrain()
{
	return (_brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called.\n";
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meooooooooooow\n";
}
