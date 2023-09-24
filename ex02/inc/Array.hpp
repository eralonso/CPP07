/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:29:38 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/24 17:08:22 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>

template < class T >
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array( void );
		Array( unsigned int n );
		Array( const Array& arr );
		~Array( void );
		Array&			operator=( const Array& arr );
		unsigned int	size( void ) const;
		T&				operator[]( unsigned int n );
		const T&		operator[]( const unsigned int n ) const;
};

#include "Array.tpp"
