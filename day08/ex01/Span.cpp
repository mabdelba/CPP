#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span( const Span & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_n = rhs._n;
		this->_v = rhs._v;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int entier){

	if(this->_v.size() < this->_n)
		_v.push_back(entier);
	else
		throw std::exception();
}

unsigned int Span::shortestSpan(){

	unsigned int ret = UINT_MAX;
	if(this->_v.size() <= 1)
		throw std::exception();
	std::sort(_v.begin(), _v.end());
	for(unsigned int i = 1; i < _v.size(); i++)
	{
		if((unsigned int)(this->_v[i] - this->_v[i - 1]) < ret)
			ret = (unsigned int)(this->_v[i] - this->_v[i - 1]);
	}
	return ret;
}

unsigned int Span::longestSpan(){

	unsigned int ret;
	if(this->_v.size() <= 1)
		throw std::exception();
	ret = *std::max_element(this->_v.begin(), this->_v.end()) - *std::min_element(this->_v.begin() ,this->_v.end());
	return(ret);
}

void Span::addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if((end - begin) + _v.size() > this->_n)
	{
		_v.insert(_v.end(), begin, begin + (_n - _v.size()));
		throw std::exception();
	}
	else
		_v.insert(_v.end(), begin, end);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */