#pragma once
#include "Math.h"


int main()
{
    {
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;
       

        result = add3(p, q);
        std::cout << result;
    }
    
    {
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;



        result = subtract3(q, p);
        std::cout << result;

    }



}
     