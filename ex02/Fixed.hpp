/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:40:56 by godot04           #+#    #+#             */
/*   Updated: 2025/08/27 14:59:00 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int val;
	static const int fr_bits;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int val);
	Fixed(const float val);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator>(Fixed copy);
	bool operator<(Fixed copy);
	bool operator>=(Fixed copy);
	bool operator<=(Fixed copy);
	bool operator==(Fixed copy);
	bool operator!=(Fixed copy);
	float operator+(Fixed copy);
	float operator-(Fixed copy);
	float operator*(Fixed copy);
	float operator/(Fixed copy);
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	static Fixed &min(Fixed &var1, Fixed &var2);
	static Fixed &max(Fixed &var1, Fixed &var2);
	static const Fixed &min(Fixed const &var1, Fixed const &var2);
	static const Fixed &max(Fixed const &var1, Fixed const &var2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
