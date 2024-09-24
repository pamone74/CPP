

// Span::Span(unsigned int N):_maxSize(N), _currentSize(0){
//     _array = new int[_maxSize];
// }

// Span::Span(const Span & span):_maxSize(span._maxSize),_currentSize(span._currentSize){
//     _array = new int[_maxSize];
//     std::copy(span._array, span._array + _currentSize, _array);
// }

// Span &Span::operator=(const Span &span)
// {
//     if(this == &span)
//         return *this;
//     delete[] _array;
//     this->_maxSize = span._maxSize;
//     this->_currentSize = span._currentSize;
//     this->_array = span._array;
//     std::copy(span._array, span._array + _currentSize, _array);

//     return *this;
// }

// Span::~Span(void){

//     delete [] _array;
// }

// // Methods for operation

// void Span::addNumber(unsigned int number)
// {
//     if(_currentSize >= _maxSize)
//         throw std::out_of_range("Full !  cannot add more Number");
//     _array[_currentSize++] = number;
// }

// // the Smalles difference between the consecutive element in a contegious array of sorted integer.
// // for example 2 5 8 10 will be 5 - 2 = 3 & 8 - 5 = 3 & 10 - 8 = 2 therefore the shotest span is 2 
// unsigned int Span::shortestSpan() const
// {
//     if (_currentSize < 2)
//         throw std::logic_error("Not enough elements to find a span.");

//     int *sortedArray = new int[_currentSize];
//     std::copy(_array, _array + _currentSize, sortedArray);
//     std::sort(sortedArray, sortedArray + _currentSize);

//     unsigned int minSpan = std::numeric_limits<unsigned int>::max();
//     for (unsigned int i = 1; i < _currentSize; ++i)
//     {
//         unsigned int span = sortedArray[i] - sortedArray[i - 1];
//         if (span < minSpan)
//             minSpan = span;
//     }

//     delete[] sortedArray;
//     return minSpan;
// }

// // the maximum gap between the smallest and the largest element
// unsigned int Span::longestSpan() const
// {
//     std::cout << "Size :: " << _currentSize << std::endl;
//     if (_currentSize < 2)
//         throw std::logic_error("Not enough elements to find a span.");

//     int minElement = *std::min_element(_array, _array + _currentSize);
//     int maxElement = *std::max_element(_array, _array + _currentSize);

//     return static_cast<unsigned int>(maxElement - minElement);
// }

// Modified all number using iterator
