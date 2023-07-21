/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:47:49 by psydenst          #+#    #+#             */
/*   Updated: 2023/07/11 20:47:42 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		static std::string _rawIdeas[100];
	public:
		std::string ideas[100];
		Brain();
		Brain(Brain const &instance);	
		void operator=(Brain const &instance);
		~Brain();
};

#endif
