// filepath: c:\Users\User\Documents\Visual Studio 2022\sprint-eschool-pixel-storm\Banner.h
#ifndef BANNER_H
#define BANNER_H

void displayBanner()
{
    std::cout << "\033[1;32m"; //  Green Colour;
    std::cout << "   ___ _          _   __ _                       " << std::endl;
    std::cout << "  / _ (_)_  _____| | / _\\ |_ ___  _ __ _ __ ___  " << std::endl;
    std::cout << " / /_)/ \\ \\/ / _ \\ | \\ \\| __/ _ \\| '__| '_ ` _ \\ " << std::endl;
    std::cout << "/ ___/| |>  <  __/ | _\\ \\ || (_) | |  | | | | | |" << std::endl;
    std::cout << "\\/    |_/_/\\_\\___|_| \\__/\\__\\___/|_|  |_| |_| |_|" << std::endl;
    std::cout << "\033[0m"; // Reset the colour
}


#endif // BANNER_H