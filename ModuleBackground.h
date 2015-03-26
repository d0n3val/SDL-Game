#pragma once
#include "Module.h"
#include "Animation.h"
#include "Globals.h"

class ModuleBackground : public Module
{
public:
	ModuleBackground(Application* app);
	~ModuleBackground();

	bool Start();
	update_status Update();

public:
	
	SDL_Texture* graphics;
	SDL_Rect ground;
	SDL_Rect foreground;
	SDL_Rect background;
	Animation flag;
	Animation girl;

	float foreground_pos;
	bool forward;
};