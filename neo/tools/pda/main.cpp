#include <csignal>
#include <iostream>

#include "qdialogpdaeditor.h"
#include <QApplication>
#include <QDebug>
#include <QString>

#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
    
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
    
    SDL_Window* window = nullptr;
    
    SDL_Surface* screenSurface = nullptr;
    
    SDL_SetHint(SDL_HINT_RENDER_DRIVER, "software");
    
    if (SDL_Init(SDL_INIT_VIDEO ) < 0)
    {
        qDebug() << "SDL_Init failed: " << QString::fromStdString(SDL_GetError());
        return 0;
    }
    else
    {
        window = SDL_CreateWindow( "SDL Window with Qt", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if (window == nullptr)
        {
            qDebug() << "Window could not be created: " << QString::fromStdString(SDL_GetError());
        }
        //signal(SIGINT, SIG_DFL);
        else
        {
            screenSurface = SDL_GetWindowSurface( window );
            SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
            SDL_UpdateWindowSurface( window );
            SDL_Delay( 2000 );
        }
    }
    
    QApplication a(argc, argv);
    QDialogPDAEditor w;
    w.show();

    return a.exec();
    
    SDL_DestroyWindow( window );
    SDL_Quit();
    
    return 0;
    /*
    QApplication a(argc, argv);
    QDialogPDAEditor w;
    w.show();

    return a.exec();
    */
    
}
