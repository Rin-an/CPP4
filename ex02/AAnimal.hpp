/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 16:29:35 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 02:02:17 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H
# include <iostream>
# include <string>

class AAnimal
{
	protected :
		std::string	type;
	public :
		AAnimal(void);
		AAnimal(const AAnimal&);
		AAnimal&	operator=(const AAnimal&);
		virtual ~AAnimal(void);
		const std::string&	getType(void) const;
		void			setType(std::string&);
		virtual void	makeSound(void) const = 0;
};

#endif
