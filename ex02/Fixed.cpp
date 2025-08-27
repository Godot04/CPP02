/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:41:05 by godot04           #+#    #+#             */
/*   Updated: 2025/08/27 14:58:48 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fr_bits = 8;

Fixed::Fixed()
{
	this->val = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::Fixed(const int val)
{
	this->val = val << fr_bits;
}

Fixed::Fixed(const float val)
{
	this->val = roundf(val * (1 << fr_bits));
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	this->val = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return (this->val);
}

void Fixed::setRawBits( int const raw )
{
	this->val = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->val) / (1 << fr_bits));
}

int Fixed::toInt(void) const
{
	return (this->val >> fr_bits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(Fixed fixed)
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(Fixed fixed)
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(Fixed fixed)
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(Fixed fixed)
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(Fixed fixed)
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(Fixed fixed)
{
	return (this->toFloat() != fixed.toFloat());
}

float Fixed::operator+(Fixed fixed)
{
	return (this->toFloat() + fixed.toFloat());
}

float Fixed::operator-(Fixed fixed)
{
	return (this->toFloat() - fixed.toFloat());
}

float Fixed::operator*(Fixed fixed)
{
	return (this->toFloat() * fixed.toFloat());
}

float Fixed::operator/(Fixed fixed)
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->val++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->val--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &var1, Fixed &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var2);
	else
		return (var1);
}

Fixed &Fixed::max(Fixed &var1, Fixed &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var1);
	else
		return (var2);
}

Fixed const &Fixed::min(Fixed const &var1, Fixed const &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var2);
	else
		return (var1);
}

Fixed const &Fixed::max(Fixed const &var1, Fixed const &var2)
{
	if (var1.toFloat() > var2.toFloat())
		return (var1);
	else
		return (var2);
}
