/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:32:41 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/04 20:44:46 by psydenst         ###   ########.fr       */
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
#include <sstream>

// MAIN.CPP
std::string	replace(std::string str1, std::string myString, std::string str2, size_t found);
int			openFile(char *fileName, std::ifstream &inputFile);
int 		error(int argc, char *fileName, std::ifstream *inputFile, std::string str1);
std::string	newString(char *str1, char *str2, std::ifstream *inputFile);
void		writeFile (char **argv, std::ofstream *outputFile, std::string ret);

#endif
