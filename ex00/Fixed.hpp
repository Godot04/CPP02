/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:55:27 by opopov            #+#    #+#             */
/*   Updated: 2025/08/19 13:41:47 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int val;
	static const int fr_bits;
public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copy);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
