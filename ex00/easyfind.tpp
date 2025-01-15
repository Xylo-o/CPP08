/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:51:10 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 07:54:05 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Colors.hpp"

template <typename T>
typename T::iterator easyfind(T& container, int data) {
    typename T::iterator iter = std::find(container.begin(), container. end(), data);
    if (iter == container.end()) {
        std::cerr << RED << "Data not found" << NC << std::endl;
    }
    else {
        std::cout << GREEN << "Found: " << NC << *iter << std::endl;
    }
    return iter;
}