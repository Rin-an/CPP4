/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:44:34 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:10:23 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	b = new Brain();
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& a)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = a;
}

Cat::~Cat()
{
	delete b;
	std::cout << "Cat destructor called."<< std::endl;
}

Cat&   Cat::operator=(const Cat& a)
{
	if (this != &a)
	{
		this->type = a.type;
		this->b = new Brain(*a.b);
	}
	std::cout << "Cat copy assignment operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow...mEEEEooooOoooooW" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->b);
}
