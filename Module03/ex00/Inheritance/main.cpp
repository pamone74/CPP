#include "Derived.hpp"

int main(void)
{

//  Playing with derived class. 
    Boxtype ttt;
    ttt.setDimension(20, 30, 40);

    Boxtype cp;

    cp = ttt;
    cp.print(); 

}