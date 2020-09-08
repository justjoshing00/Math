#pragma once
#include "Math.h"
#include "Matrix.h"


int main()
{
 
    {
        //vector add
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;
       

        result = add3(p, q);
        std::cout << result <<"\n";
    }
    
    {
        //vector subtract
        vectors::vec3 p{ 1,2,3 };
        vectors::vec3 q{ 4,5,6 };

        Result result;



        result = subtract3(q, p);
        std::cout << result<<"\n";

    }
    
    {
        //vector magnitude
        vectors::vec3 p{ 5,6,7 };
        float result = 0;// implicit conversion, find a better way!
        result = mag3(p);

        std::cout <<result<< "\n";
    }

    {
        //vector dot product
        vectors::vec3 p{ 5,6,7 };
        vectors::vec3 q{ 2,3,4 };
        float result = 0;// implicit conversion, find a better way!
        result = dot3(p, q);
        std::cout << result<< "\n";
    }
    
    {
        //vector cross product - Im pretty sure this is busted
        vectors::vec3 p{ 5,6,7 };
        vectors::vec3 q{ 2,3,4 };
        Result result;
        
        result = cross(p, q);
        std::cout << result <<"\n";
    }
    
    {
        //vector mutiply 
        vectors::vec3 p{1, 2, 3};
        float scalar = 10.0;
        Result result;
        result = scalarMultiple(p, scalar);
        std::cout << "multiple is " << result << "\n";
    }
    
    {
        //linear interpolation
        vectors::vec3 p{ 30,0,73 };
        vectors::vec3 q{ 60,80,120 };
        float norm = 0.5;
        Result result;
        result = lerp(p, q,norm);
        std::cout<<"lerp is" << result << "\n";

    }
    
    {
        //vector rotation
        vectors::vec3 p{ -6,8,1};
        
        float angle = 90 * 3.1415926535 /180.0f;
        Result result;
        result = rotateZ(p,  angle);
        std::cout <<"rotation"<< result << "\n";

    }
    
    {
        //vector normalize
        vectors::vec3 p{ -6,8,1 };
        Result result;
        result = Normalize(p);
        std::cout << result << "\n";

    }
    
    {
        fillmatrix();
        readmatrix();
    }
   

}
     