/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:32:20 by eralonso          #+#    #+#             */
/*   Updated: 2023/09/24 16:09:42 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "\t\t\t\tTESTING [ int ]\n" << std::endl;
	testTypes< int >( -6, 6, -6 );
	std::cout << "\n\n\t\t\t\tTESTING [ double ]\n" << std::endl;
	testTypes< double >( -6.5, 6.5, -6.5 );
	return ( 0 );
}