/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:47:36 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/25 10:50:31 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template < typename T >
Array< T >::Array( void )
{
	this->_size = 0;
	this->_arr = NULL;
}

template < typename T >
Array< T >::Array( unsigned int n )
{
	this->_size = n;
	this->_arr = new T[ this->_size ]();
}

template < typename T >
Array< T >::Array( const Array< T >& arr )
{
	this->_size = arr._size;
	this->_arr = new T[ this->_size ]();
	if ( this->_size != 0 )
	{
		for ( unsigned int i = 0; i < this->_size; i++ )
			this->_arr[ i ] = arr._arr[ i ];
	}
}

template < typename T >
Array< T >::~Array( void )
{
	if ( this->_size != 0 )
		delete [] this->_arr;
}

template < typename T >
Array< T >&	Array< T >::operator=( const Array< T >& arr )
{
	this->_size = arr._size;
	if ( this->_size != 0 )
		delete [] this->_arr;
	this->_arr = new T[ this->_size ]();
	if ( this->_size != 0 )
	{
		for ( unsigned int i = 0; i < this->_size; i++ )
			this->_arr[ i ] = arr._arr[ i ];
	}
	return ( *this );
}

template < typename T >
unsigned int	Array< T >::size( void ) const
{
	return ( this->_size );
}

template < typename T >
T&	Array< T >::operator[]( unsigned int n )
{
	if ( this->_arr == NULL )
		throw std::logic_error( "Attempt to access to empty sarray" );
	if ( n >= this->_size )
		throw std::out_of_range( "Index is out of bonds" );
	return ( this->_arr[ n ] );
}

template < typename T >
const T&	Array< T >::operator[]( unsigned int n ) const
{
	if ( this->_arr == NULL )
		throw std::logic_error( "Attempt to access to empty sarray" );
	if ( n >= this->_size )
		throw std::out_of_range( "Index is out of bonds" );
	return ( this->_arr[ n ] );
}
