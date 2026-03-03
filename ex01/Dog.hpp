/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:06:40 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 16:48:42 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog(void);
	void makeSound() const;
	virtual Brain *getBrain();

private:
	Brain	*_brain;
	
};

#endif
