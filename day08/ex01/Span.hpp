#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <vector>


class Span
{

	private:
		std::vector <int> _v;
		unsigned int _n;
	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void	addNumber(int entier);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end);




};

#endif /* ************************************************************ SPAN_H */