/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:58:57 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:05:34 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//AAnimal aa; won't be instanciated 
	const Dog* 		j = new Dog();
	const Cat* 		i = new Cat();

	std::cout << "********Right behavior**********" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	delete(j);
	delete(i);
	return 0;
}
