/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:44:50 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 17:57:13 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
		protected:
			std::string type;
	
		public:
			WrongCat(std::string name);
			WrongCat();
			~WrongCat();
			WrongCat	(WrongCat const &instance);
			WrongCat &operator=(WrongCat const &instance);
			std::string getType()const;
};

#endif
