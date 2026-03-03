/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:20:16 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 17:24:14 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
public:
	Brain(void);
	Brain(std::string idea);
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain(void);
	const std::string	&getIdea(size_t n) const;
	void	setIdea(size_t index, std::string idea);

private:
	static const size_t _brainSize = 100;
	std::string _ideas[_brainSize];
	
	
};

#endif
