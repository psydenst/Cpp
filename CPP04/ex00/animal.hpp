/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:21:23 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 16:54:28 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
		protected:
			std::string type;
	
		public:
			Animal(std::string name);
			Animal();
			~Animal();
			Animal	(Animal const &instance);
			Animal &operator=(Animal const &instance);
			virtual void makeSound() const;
			std::string getType()const;
};

#endif
