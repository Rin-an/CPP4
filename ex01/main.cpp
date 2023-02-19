/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:58:57 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/28 19:21:55 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		Dog b;
		Animal a;
		a = b;
		a.makeSound();
		delete j;
		delete i;
	}
/*	//Test for deep copy
	{
		const std::string	*tab;
		Cat	org;
		org.getBrain()->setTab("Drink water");
			Cat cpy = org;
			cpy.getBrain()->setTab("Drink choco");

		tab = cpy.getBrain()->getTab();
		for(int i = 0; i < 3; i++)
			std::cout << tab[i] << std::endl;
	}
	
	{
		Animal*	a_arr[6];

		std::cout << "******CONSTRUCTORS********" << std::endl;
		for(int i = 0; i < 3;i++)
			a_arr[i] = new Cat();
		for(int i = 3; i < 6; i++)
			a_arr[i] = new Dog();
		std::cout << "******DESTRUCTORS********" << std::endl;
		for(int i = 0; i < 6; i++)
		{
			a_arr[i]->makeSound();
			delete a_arr[i];
		}
	}*/
	return 0;
}
