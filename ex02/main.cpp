/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 18:14:17 by rorollin          #+#    #+#             */
/*   Updated: 2026/03/03 18:22:47 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		//Animal animal;
		const size_t arraySize = 8;
		Animal *array[arraySize];

		for (size_t i = 0; i < arraySize / 2; i++)
			array[i] = new Dog();
		for (size_t i = (arraySize / 2); i < arraySize; i++)
			array[i] = new Cat();

		Brain *tempBrain;
		size_t	limitDogCat = arraySize / 2;

		tempBrain = array[limitDogCat]->getBrain();
		{
			std::cout << tempBrain->getIdea(0) << std::endl;
			tempBrain->setIdea(0, "Wouf wouf");
			std::cout << tempBrain->getIdea(0) << std::endl;
		}
		std::cout << "-----------------------\n";
		std::cout << "First brain set.\n";
		std::cout << "-----------------------\n";

		*array[limitDogCat + 1] = *array[limitDogCat];

		tempBrain = array[limitDogCat + 1]->getBrain();
		{
			std::cout << tempBrain->getIdea(0) << std::endl;
			tempBrain->setIdea(0, "Waf waf");
			std::cout << "-----------------------\n";
			std::cout << "Second brain has been changed\n";
			std::cout << "-----------------------\n";
			std::cout << tempBrain->getIdea(0) << std::endl;
		}
		tempBrain = array[limitDogCat]->getBrain();
		std::cout << "-----------------------\n";
		std::cout << "First brain value\n";
		std::cout << "-----------------------\n";
		{
			std::cout << tempBrain->getIdea(0) << std::endl;
		}

		for (size_t i = 0; i < arraySize ; i++)
		  delete array[i];
	}
	std::cout << "-----------------------\n";
	{
		Dog *dogA = new Dog();
		Dog dogB(*dogA);
		Dog dogC;

		Brain *tempBrain;
		tempBrain = dogA->getBrain();
		tempBrain->setIdea(0, "Waf");
		tempBrain = dogB.getBrain();
		tempBrain->setIdea(0, "Wouf");
		tempBrain = dogC.getBrain();
		tempBrain->setIdea(0, "Wuf");
		tempBrain = dogA->getBrain();
		std::cout << "-----------------------\n";
		std::cout << "Dog A : \n";
		std::cout << "-----------------------\n";
		std::cout << tempBrain->getIdea(0) << std::endl;
		tempBrain = dogB.getBrain();
		std::cout << "-----------------------\n";
		std::cout << "Dog B : \n";
		std::cout << "-----------------------\n";
		std::cout << tempBrain->getIdea(0) << std::endl;
		tempBrain = dogC.getBrain();
		std::cout << "-----------------------\n";
		std::cout << "Dog C : \n";
		std::cout << "-----------------------\n";
		std::cout << tempBrain->getIdea(0) << std::endl;

		dogC = dogB;

		tempBrain = dogC.getBrain();
		tempBrain->setIdea(0, "Wif");
		std::cout << "-----------------------\n";
		std::cout << "Dog C after: \n";
		std::cout << "-----------------------\n";
		std::cout << tempBrain->getIdea(0) << std::endl;
		tempBrain = dogB.getBrain();
		std::cout << "-----------------------\n";
		std::cout << "Dog B after: \n";
		std::cout << "-----------------------\n";
		std::cout << tempBrain->getIdea(0) << std::endl;
		delete dogA;
	}

	return 0;
}
