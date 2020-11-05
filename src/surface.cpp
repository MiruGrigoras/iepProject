#include "../libs/surface.hpp"
#include <iostream>
#include <string>

namespace painting{
    Surface::Surface(SurfaceType type){ surfaceType = type;}

    Surface::Surface(const Surface &object): surfaceType(object.surfaceType){}

    void Surface::prepareSurface(){ 
        std::cout << "Gesso has been added on the " << this->printSurfaceType() << std::endl; }

    std::string Surface::printSurfaceType(){
        switch (this->surfaceType)
        {
        case Canvas:
            return "Canvas";
            break;
        case Cardboard:
            return "Cardboard";
            break;
        case Paper:
            return "Paper";
            break;
        default:
        return "No ok";
            break;
        }
    }
}