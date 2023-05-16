/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psydenst <psydenst@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:27:27 by psydenst          #+#    #+#             */
/*   Updated: 2023/05/15 22:57:20 by psydenst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main()
// {
//     Fixed a(15);
//     Fixed b(15.30f);

//   std::cout << a++ << std::endl;
//   std::cout << ++a << std::endl;
//     // std::cout << "a + b: " <<  a.operator+(b) << std::endl;
//     // std::cout << "a - b: " << a - b << std::endl;
//     // std::cout << "a * b: " << a * b << std::endl;
//     // std::cout << "a / b: " << a / b << std::endl;
//     // std::cout << "a++: " <<  a++ << std::endl;
//     // std::cout << "novo valor de a: " << a << std::endl;
//     // std::cout << "o incremento é de um bit a++ de novo: " << a++ << std::endl;    
//     // std::cout << "depois do incremento a :";
//     // std::cout << a << std::endl;
//     // std::cout << "a--: " << a-- << std::endl;
//     // std::cout << "++a: " << ++a << std::endl;
//     // std::cout << "--a: " << --a << std::endl;
// }

int main()
{
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  // std::cout << Fixed::max( a, b ) << std::endl;
  return 0; 
}
