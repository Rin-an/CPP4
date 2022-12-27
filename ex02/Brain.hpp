/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssadiki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 13:18:29 by ssadiki           #+#    #+#             */
/*   Updated: 2022/12/27 01:44:42 by ssadiki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H
# include <iostream>
# include <string>

class Brain
{
	std::string	ideas[100];
	public :
		Brain(void);
		Brain(const Brain&);
		Brain&	operator=(const Brain&);
		~Brain(void);
		const std::string*	getTab(void) const;
		void			setTab(std::string);
};

#endif
