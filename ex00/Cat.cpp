/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:44:34 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:56:22 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& a)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = a;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called."<< std::endl;
}

Cat&   Cat::operator=(const Cat& a)
{
	if (this != &a)	
		this->type = a.type;
	std::cout << "Cat assignement operator called." << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow...mEEEEooooOoooooW" << std::endl;
}
