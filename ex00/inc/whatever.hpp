/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:47:44 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/24 16:09:18 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
void	swap( T& a, T& b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
const T&	min( const T& a, const T& b )
{
	return ( a < b ? a : b );
}

template < typename T >
const T&	max( const T& a, const T& b )
{
	return ( a > b ? a : b );
}

template < typename T >
void	testTypes( T a, T b, T c )
{
	std::cout << "SWAP: [ BEFORE ] -> a: " << a << " / &a: " << &a << " && b: " << b << " / &b: " << &b <<std::endl;
	swap< T >( a, b );
	std::cout << "SWAP: [ AFTER ]  -> a: " << a << " / &a: " << &a << " && b: " << b << " / &b: " << &b <<std::endl;
	std::cout << "max( a, b ): " << max( a, b ) << " / &max( a, b ): " << &max( a, b ) << std::endl;
	std::cout << "min( a, b ): " << min( a, b ) << " / &min( a, b ): " << &min( a, b ) << std::endl;
	std::cout << "c: " << c << " / &c: " << &c << std::endl;
	std::cout << "max( c, b ): " << max( c, b ) << " / &max( c, b ): " << &max( c, b ) << std::endl;
	std::cout << "min( c, b ): " << min( c, b ) << " / &min( c, b ): " << &min( c, b ) << std::endl;	
}