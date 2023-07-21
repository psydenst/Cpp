/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 19:17:26 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/08 19:39:14 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

class Harl
{
	private:

	public:
	Harl();
	~Harl();
	void	complain(std::string levels);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};
