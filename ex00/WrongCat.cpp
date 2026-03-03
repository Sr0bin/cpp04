/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:02:18 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 17:32:46 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat Constructor called.\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	(void) type;
	std::cout << "Paramatrized WrongCat Constructor called.\n";
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor called.\n";
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat Assignment Constructor called.\n";
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor called.\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooooooooooow\n";
}
