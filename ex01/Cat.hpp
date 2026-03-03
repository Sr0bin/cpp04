/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:01:35 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 16:52:46 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string type);
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat(void);
	void makeSound() const;
	Brain *getBrain();

private:
	Brain	*_brain;
};

#endif
