/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:40:28 by godot04           #+#    #+#             */
/*   Updated: 2025/08/27 15:05:17 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}


// int main()
// {
//     Fixed a(2);
//     Fixed b(5);

//     // 0 (Showing results)
//     std::cout << "0) a: " << a << std::endl;
//     std::cout << "0) b: " << b << std::endl;
//     std::cout << "-----------------------------------" << std::endl;

//     // 1 (>, <, >=, <=, !=, ==)
//     std::cout << "1) a < b: " << (a < b) << std::endl;
//     std::cout << "1) a > b: " << (a > b) << std::endl;
//     std::cout << "1) a <= b: " << (a <= b) << std::endl;
//     std::cout << "1) a >= b: " << (a >= b) << std::endl;
//     std::cout << "1) a == b: " << (a == b) << std::endl;
//     std::cout << "1) a != b: " << (a != b) << std::endl;
//     std::cout << "-----------------------------------" << std::endl;

//     // 2 (+, -, *, /)
//     std::cout << "2) a + b: " << (a + b) << std::endl;
//     std::cout << "2) a - b: " << (a - b) << std::endl;
//     std::cout << "2) a * b: " << (a * b) << std::endl;
//     std::cout << "2) a / b: " << (a / b) << std::endl;
//     std::cout << "-----------------------------------" << std::endl;

//     // 3 (max, min)
//     const Fixed a1(2);
//     const Fixed b1(5);
//     std::cout << "3) max(a, b): " << a.max(a, b) << std::endl;
//     std::cout << "3) min(a, b): " << a.min(a, b) << std::endl;
//     std::cout << "3) const max(a1, b1): " << a1.max(a1, b1) << std::endl;
//     std::cout << "3) const min(a1, b1): " << a1.min(a1, b1) << std::endl;
// }
