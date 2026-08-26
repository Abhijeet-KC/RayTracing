#include "color.h"
#include "vec3.h"

#include <iostream>

int main(){
    std::cout << "P3" << std::endl;
    int img_width = 64;
    int img_height = 64;
    std::cout << img_width << " " << img_height << "\n 255\n";

    for(int j = 0; j < img_height; j++){

        std::clog << "\r Scanlines remaining: " << img_height - j << std::endl;

        for(int i = 0; i < img_width; i++){
            color& pixel_color = color(double(i) / (img_width - 1), double(j) / (img_height - 1), 0);
            write_color(std::cout, pixel_color);
        }

        std::clog << "\r Done!        ";
    }
}