/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:32:20 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/24 16:28:32 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int	main( void )
{
	int		arrI[ 6 ] = { -1, 2, 4, 5, 6, 0 };
	double	arrD[ 6 ] = { -1.5, 2.5, 4.5, 5.5, 6.5, 0.5 };

	std::cout << "[  Int  ]\n" << std::endl;
	testing( arrI, 6 );
	std::cout << "\n\n[  Float  ]\n" << std::endl;
	testing( arrD, 6 );
	return ( 0 );
}