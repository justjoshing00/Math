#pragma once
#include "Math.h"


int main()
{
    {
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;
       

        result = add3(p, q);
        std::cout << result <<"\n";
    }
    
    {
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;



        result = subtract3(q, p);
        std::cout << result<<"\n";

    }
    
    {
        vectors::vec3 p{ 5,6,7 };
        float result = 0;// implicit conversion, find a better way!
        result = mag3(p);

        std::cout <<result<< "\n";
    }

    {
        vectors::vec3 p{ 5,6,7 };
        vectors::vec3 q{ 2,3,4 };
        float result = 0;// implicit conversion, find a better way!
        result = dot3(p, q);
        std::cout << result<< "\n";
    }
    {
        vectors::vec3 p{ 5,6,7 };
        vectors::vec3 q{ 2,3,4 };
        Result result;
        
        result = cross(p, q);
        std::cout << result <<"\n";
    }


}
     