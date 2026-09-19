#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray{
    public:
        ray() {}
        ray(const point3& origin, const vec3& direction) : orig(origin), direc(direction) {}
        
        const point3& origin() const {return orig;}
        const vec3& direction() const {return direc;}

        point3 at(double t){
            return orig + t*direc;
        }
    
    private:
        point3 orig;
        vec3 direc;
};
#endif