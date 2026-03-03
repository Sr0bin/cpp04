/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:00:20 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 18:14:38 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal Constructor called.\n";
	_type = "";
}

Animal::Animal(std::string &type)
{
	(void) type;
	std::cout << "Paramatrized Animal Constructor called.\n";
	_type = "";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy Constructor called.\n";
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Default Animal Assignment Constructor called.\n";
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called.\n";
}

std::string	Animal::getType() const
{
	return (_type);
}
