/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 06:51:06 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 07:51:21 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <stdexcept>
#include <vector>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T& container, int data);

#include "easyfind.tpp"