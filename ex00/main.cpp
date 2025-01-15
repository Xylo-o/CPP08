/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:51:21 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 08:00:52 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Colors.hpp"

int main(void) {
    std::vector<int> v;
    
    for (int i = 0; i < 10; ++i) {
        v. push_back(i);
    }
    
    try {
        std::vector<int>::iterator iter = easyfind(v, 5);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, 42);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, -2);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, 4312847134334);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, '/');
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, 0);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, 10);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    try {
        std::vector<int>::iterator iter = easyfind(v, 9);
    } catch (const std::exception& e) {
        std::cerr << RED << e.what() << NC << std::endl;
    }
    
    return 0;
}