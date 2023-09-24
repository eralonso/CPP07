/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:11:08 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/24 16:26:27 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
void	iter( T *arr, unsigned int n, void ( *f )( T& ) )
{
	if ( arr != NULL )
	{
		for ( unsigned int i = 0; i < n; i++ )
			f( arr[ i ] );
	}
}

template < typename T >
void	iter( const T *arr, unsigned int n, void ( *f )( const T& ) )
{
	if ( arr != NULL )
	{
		for ( unsigned int i = 0; i < n; i++ )
			f( arr[ i ] );
	}
}

template < typename T >
void	print( const T& elem )
{
	std::cout << " " << elem << " ";
}

template < typename T >
void	add( T& elem )
{
	elem++;
}

template < typename T >
void	testing( T *arr, unsigned int size )
{
	std::cout << "\t\tTESTING [ print ]\n" << std::endl;
	iter< T >( arr, size, &print );
	std::cout << "\n\n\t\tTESTING [ add ]\n" << std::endl;
	iter< T >( arr, size, &add );
	iter< T >( arr, size, &print );
	std::cout << std::endl;
}
