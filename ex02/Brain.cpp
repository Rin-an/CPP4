/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:19:44 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:31:35 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{

	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain& a)
{
	std::cout << "Brain copy constructor called." << std::endl;
	*this = a;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called."<< std::endl;
}

Brain&   Brain::operator=(const Brain& a)
{
	if (this != &a)
	{
		for(int i=0; i < 100; i++)
			this->ideas[i] = a.ideas[i];
	}
	std::cout << "Brain copy assignement opertator called." << std::endl;
	return (*this);
}

void	Brain::setTab(std::string str)
{
	for (int i = 0;i < 100;i++)
		this->ideas[i] = str;
}

const std::string*	Brain::getTab(void) const
{
	return (this->ideas);
}

