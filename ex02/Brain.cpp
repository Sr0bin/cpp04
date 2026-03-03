/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:20:33 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 17:24:14 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain Constructor Called\n";
	for (size_t i = 0; i < _brainSize; i++)
		_ideas[i] = "";
}

Brain::Brain(std::string idea)
{
	std::cout << "Parametrized Brain Constructor Called\n";
	for (size_t i = 0; i < _brainSize; i++)
		_ideas[i] = idea;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy Constructor Called\n";
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment Constructor Called\n";
	if (this != &other)
		for (size_t i = 0; i < _brainSize; i++)
			this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called\n";
}

const std::string &Brain::getIdea(size_t n) const
{
	if (n > _brainSize - 1)
		return (_ideas[_brainSize - 1]); // Since we don't have exceptions yet, we return the last idea.
	return(_ideas[n]);
}

void	Brain::setIdea(size_t index, std::string idea)
{
	if (index > _brainSize - 1)
		return ;
	_ideas[index] = idea;
}
