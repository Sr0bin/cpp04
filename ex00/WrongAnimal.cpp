/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:00:20 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 16:35:01 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal Constructor called.\n";
	_type = "";
}

WrongAnimal::WrongAnimal(std::string &type)
{
	(void) type;
	std::cout << "Paramatrized WrongAnimal Constructor called.\n";
	_type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor called.\n";
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Default WrongAnimal Assignment Constructor called.\n";
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called.\n";
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "An animal must have a type to make noise!\n";
}
