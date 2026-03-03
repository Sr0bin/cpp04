/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 15:44:02 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 18:14:38 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
public:
	Animal(void);
	Animal(std::string &type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal(void);
	virtual void makeSound() const = 0;
	std::string getType() const;
	virtual Brain *getBrain() = 0;

protected:
	std::string _type;
	
};

#endif
