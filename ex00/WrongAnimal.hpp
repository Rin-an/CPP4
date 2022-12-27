/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:14:18 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/25 23:17:01 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
#define WRONG_ANIMAL_H
# include <iostream>
# include <string>

class WrongAnimal
{
	protected :
		std::string	type;
	public :
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal&);
		WrongAnimal&	operator=(const WrongAnimal&);
		~WrongAnimal(void);
		const std::string&	getType(void) const;
		void			setType(std::string&);
		void	makeSound(void) const;
};

#endif
