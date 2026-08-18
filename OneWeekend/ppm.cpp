#include <iostream>

int main(){

    // Image Definition
    int img_height = 64;
    int img_width = 64;

    // Render
    std::cout<<"P3 \n" << img_width << " " << img_height << "\n 255 \n";
    for(int j = 0; j < img_height; j++){

        for(int i = 0; i < img_width; i++){

            auto r = double(i) / (img_width - 1);
            auto g = double(j) / (img_height - 1);
            auto b = 0.0;
        

            int pr = int(255.999 * r);
            int pg = int(255.999 * g);
            int pb = int(255.999 * b);

            std::cout << pr << " " << pg << " " << pb << "\n";
        }
    }
    return 0;
}