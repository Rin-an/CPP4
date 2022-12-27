/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:29:35 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/26 16:18:53 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
# include <iostream>
# include <string>

class Animal
{
	protected :
		std::string	type;
	public :
		Animal(void);
		Animal(const Animal&);
		Animal&	operator=(const Animal&);
		virtual ~Animal(void);
		const std::string&	getType(void) const;
		void			setType(std::string&);
		virtual void	makeSound(void) const;
};

#endif
