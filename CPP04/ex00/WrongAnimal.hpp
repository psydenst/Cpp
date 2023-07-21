/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:36:04 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:57:24 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
		protected:
			std::string type;
	
		public:
			WrongAnimal(std::string name);
			WrongAnimal();
			~WrongAnimal();
			WrongAnimal	(WrongAnimal const &instance);
			WrongAnimal &operator=(WrongAnimal const &instance);
			virtual void makeSound() const;
			std::string getType()const;
};

#endif 
