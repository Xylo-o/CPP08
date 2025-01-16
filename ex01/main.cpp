/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:17 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/16 20:49:44 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"

int main (void) {
	std::cout << YELLOW << "===============FIRST TEST===============" << NC << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(11);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(17);
		std::cout << BLUE << "The shortest span is: " << NC << sp.shortestSpan() << std::endl;
		std::cout << BLUE << "The longest span is: " << NC << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << RED << "Exception caught: " << NC << e.what() << std::endl;
	}	
	std::cout << YELLOW << "===============SECOND TEST===============" << NC << std::endl;
	try {
		Span sp = Span(3);
		sp.addNumber(6);
		sp.addNumber(11);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(17);
		std::cout << BLUE << "The shortest span is: " << NC << sp.shortestSpan() << std::endl;
		std::cout << BLUE << "The longest span is: " << NC << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << RED << "Exception caught: " << NC << e.what() << std::endl;
	}
	std::cout << YELLOW << "===============THIRD TEST===============" << NC << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		std::cout << BLUE << "The shortest span is: " << NC << sp.shortestSpan() << std::endl;
		std::cout << BLUE << "The longest span is: " << NC << sp.longestSpan() << std::endl;
	} catch (const std::exception &e) {
		std::cerr << RED << "Exception caught: " << NC << e.what() << std::endl;
	}
    return 0;
}