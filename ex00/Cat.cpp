/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:02:18 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 16:11:57 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat Constructor called.\n";
	_type = "Cat";
}

Cat::Cat(std::string type)
{
	(void) type;
	std::cout << "Paramatrized Cat Constructor called.\n";
	_type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy Constructor called.\n";
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment Constructor called.\n";
	if (this != &other)
	{
		*this = other;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Default Cat Destructor called.\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meooooooooooow\n";
}
