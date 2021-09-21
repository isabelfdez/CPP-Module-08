/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:19:41 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/21 17:10:34 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <algorithm>

class Span
{
	private:
		unsigned int		_max;
	public:
		std::list<int>		_lst;
		Span();
		Span(unsigned int n);
		Span(Span const & obj);
		~Span();

		Span &	operator=(Span const & obj);

		void	addNumber(int n);
		void	addNumber(std::list<int>::iterator begin, std::list<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class FullListException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class CannotSpanException : public std::exception
		{
			public:
				const char*	what() const throw();
		};
		class NotEnoughSpaceException : public std::exception
		{
			public:
				const char*	what() const throw();
		};

};

#endif