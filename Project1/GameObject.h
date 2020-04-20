#pragma once
#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

#include "Game.h"

class GameObject
{
public:
	GameObject(const char* texturesheet,int x, int y);
	~GameObject();

	void Update();
	void Update_Enemy();
	void Render();
	
private:
	int xpos;
	int ypos;
	SDL_Texture* objTexture;
	SDL_Rect srcRect;
	SDL_Rect destRect;


};


#endif // !GAME_OBJECT_H



