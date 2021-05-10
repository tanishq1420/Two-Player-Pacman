#include "Entity.hpp"

#include <cmath>


Entity::Entity(float x, float y, float w, float h)
{
//    tileX = tilePosX;
//    tileY = tilePosY;
    screenPosX = x;
    screenPosY = y;
    width = w;
    height = h;
    entRect.x = x;
    entRect.y = y;
    entRect.w = w;
    entRect.h = h;
}

float Entity::getScreenPosX()
{
    return screenPosX;
}

float Entity::getScreenPosY()
{
    return screenPosY;
}

int Entity::getTileX()
{
    return tileX;
}

int Entity::getTileY()
{
    return tileY;
}

void Entity::move(float x, float y)
{
    screenPosX += x;
    entRect.x += x;
    screenPosY += y;
    entRect.y += y;

    /*if ((int)(screenPosX + 8) % 16 == 0 && (int)(screenPosY + 8) % 16 == 0)
    {
        tileX = (int) round((screenPosX - 8) / 16);
        tileY = (int) round((screenPosY - 8) / 16);
    }*/
}

void Entity::setimage(SDL_Texture* &spriteSheet,SDL_Rect &textureRect, SDL_Renderer* &renderer)
{
    SDL_Surface* temp = IMG_Load("/Users/tanishq/Desktop/SDL Tutorial/SDL Tutorial/things.png");
    
    spriteSheet = SDL_CreateTextureFromSurface(renderer, temp);
    SDL_FreeSurface(temp);
    textureRect.x = 0;
    textureRect.y = 0;

    SDL_QueryTexture(spriteSheet, NULL, NULL, &textureRect.w, &textureRect.h);
   
    textureRect.w /= 12;
    textureRect.h /= 6;
    
}

void Entity::teleport(int x, int y)
{
    tileX = x;
    tileY = y;
    screenPosX = x * 16.0f + 8.0f;
    screenPosY = y * 16.0f + 8.0f;
}

SDL_Rect Entity::getEntRect()
{
    return entRect;
}