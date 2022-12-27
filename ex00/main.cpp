/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:58:57 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 23:26:32 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* 		meta = new Animal();
		const Animal* 		j = new Dog();
		const Animal* 		i = new Cat();

		std::cout << "********Right behavior**********" << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); 
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	{
		const WrongAnimal*	wa = new WrongAnimal();
		const WrongAnimal*	wc = new WrongCat();
		const WrongCat*		wc2 = new WrongCat();
		std::cout << "********Wrong behavior**********" << std::endl;
		std::cout << wa->getType() << " " << std::endl;
		std::cout << wc->getType() << " " << std::endl;
		std::cout << wc2->getType() << " " << std::endl;
		wa->makeSound();
		wc->makeSound();
		wc2->makeSound();
		delete(wa);
		delete(wc);
		delete(wc2);
	}
	return 0;
}
