/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:41 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/24 16:44:04 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "MutantStack.hpp"

int main () {
	std::cout << YELLOW << "=========================INT=========================" << NC << std::endl;
	MutantStack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << BLUE << "Int stack: " << NC << std::endl;
    for (MutantStack<int>::iterator it = intStack.begin(); it != intStack.end(); ++it) {
        std::cout << *it << std::endl;
    }

	std::cout << YELLOW << "========================FLOAT========================" << NC << std::endl;
    MutantStack<float> floatStack;
    floatStack.push(1.1f);
    floatStack.push(2.2f);
    floatStack.push(3.3f);

    std::cout << MAGENTA << "Float stack: " << NC << std::endl;
    for (MutantStack<float>::iterator it = floatStack.begin(); it != floatStack.end(); ++it) {
        std::cout << *it << std::endl;
    }

	std::cout << YELLOW << "========================STRING=======================" << NC << std::endl;
    MutantStack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("!");

    std::cout << GREEN << "String stack: " << NC << std::endl;
    for (MutantStack<std::string>::iterator it = stringStack.begin(); it != stringStack.end(); ++it) {
        std::cout << *it << std::endl;
    }
	return 0;
}