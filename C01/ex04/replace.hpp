/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:32:41 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/03 20:45:34 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <string.h>
# include <stdlib.h>
# include <string>
# include <cstring>
    // std::string replace_str()
    // std:string read_str();
    std::string replace(std::string str1, std::string myString, std::string str2, size_t found);

#endif