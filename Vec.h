#pragma once
namespace vectors
{

    struct vec2
    {
        float x = 0.0;
        float y = 0.0;
       
        Result add2(vectors::vec2, vectors::vec2);
        Result subtract2(vectors::vec2, vectors::vec2);
        float mag2(vectors::vec2);
        float dot2(vectors::vec2);
    };

    

    struct vec3
    {
        float x = 0.0;
        float y = 0.0;
        float z = 0.0;

        Result add3(vectors::vec3, vectors::vec3);
        Result subtract3(vectors::vec3, vectors::vec3);
        float mag3(vectors::vec3);
        float dot3(vectors::vec3);
    };

    struct vec4
    {
        float x = 0.0;
        float y = 0.0;
        float z = 0.0;
        float r = 0.0;
        
        Result add4(vectors::vec4, vectors::vec4);
        Result subtract4(vectors::vec4, vectors::vec4);
        float mag4(vectors::vec4);
        float dot4(vectors::vec4);

    };

}