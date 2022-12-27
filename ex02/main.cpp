/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:58:57 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:20:17 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const std::string	*tab;
		Cat	org;
		org.getBrain()->setTab("Drink water");
		{
			Cat cpy = org;
			cpy.getBrain()->setTab("Drink choco");
		}
		tab = org.getBrain()->getTab();
		for(int i = 0; i < 3; i++)
			std::cout << tab[i] << std::endl;
	}
	{
		//AAnimal aa; won't be instanciated
		const Dog*       j = new Dog();
		const Cat*       i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		delete(j);
		delete(i);

	}
	return 0;
}
