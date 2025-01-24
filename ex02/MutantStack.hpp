/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:45:44 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/24 16:29:15 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <iterator>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack();
    	MutantStack(const MutantStack &other);
    	MutantStack &operator=(const MutantStack& other);
    	~MutantStack();
		
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
	private:
		
};

#include "MutantStack.tpp"