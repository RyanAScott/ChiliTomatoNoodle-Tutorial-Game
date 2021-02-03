/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}// Game

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel(); // processes input, updates game
	ComposeFrame();// draw the frame
	gfx.EndFrame();// present frame to user
}// Go

void Game::UpdateModel()
{
}// UpdateModel

void Game::ComposeFrame()
{
	// variables
	int x = 400;
	int y = 300;
	
	int gb = 255;

	// if statements
	if (wnd.kbd.KeyIsPressed(VK_RIGHT))
	{
		x = x + 100;
	}// if

	if (wnd.kbd.KeyIsPressed(VK_LEFT))
	{
		x = x - 100;
	}// if 

	if (wnd.kbd.KeyIsPressed(VK_DOWN))
	{
		y = y + 100;
	}// if

	if (wnd.kbd.KeyIsPressed(VK_UP))
	{
		y = y - 100;
	}// if

	if (wnd.kbd.KeyIsPressed(VK_CONTROL)) 
	{
		gb = 0;
	}// if

	if (wnd.kbd.KeyIsPressed(VK_SHIFT)) {
		// Quadrant 3
		gfx.PutPixel(x - 5, y - 5, 255, gb, gb);
		gfx.PutPixel(x - 5, y - 4, 255, gb, gb);
		gfx.PutPixel(x - 5, y - 3, 255, gb, gb);
		gfx.PutPixel(x - 4, y - 5, 255, gb, gb);
		gfx.PutPixel(x - 3, y - 5, 255, gb, gb);

		// Quadrant 2
		gfx.PutPixel(x - 5, y + 5, 255, gb, gb);
		gfx.PutPixel(x - 5, y + 4, 255, gb, gb);
		gfx.PutPixel(x - 5, y + 3, 255, gb, gb);
		gfx.PutPixel(x - 4, y + 5, 255, gb, gb);
		gfx.PutPixel(x - 3, y + 5, 255, gb, gb);

		// Quadrant 4
		gfx.PutPixel(x + 5, y - 5, 255, gb, gb);
		gfx.PutPixel(x + 5, y - 4, 255, gb, gb);
		gfx.PutPixel(x + 5, y - 3, 255, gb, gb);
		gfx.PutPixel(x + 4, y - 5, 255, gb, gb);
		gfx.PutPixel(x + 3, y - 5, 255, gb, gb);

		// Quadrant 1
		gfx.PutPixel(x + 5, y + 5, 255, gb, gb);
		gfx.PutPixel(x + 5, y + 4, 255, gb, gb);
		gfx.PutPixel(x + 5, y + 3, 255, gb, gb);
		gfx.PutPixel(x + 4, y + 5, 255, gb, gb);
		gfx.PutPixel(x + 3, y + 5, 255, gb, gb);


	}// if	
	else {
		gfx.PutPixel(x - 5, y, 255, gb, gb);
		gfx.PutPixel(x - 4, y, 255, gb, gb);
		gfx.PutPixel(x - 3, y, 255, gb, gb);
		gfx.PutPixel(x + 3, y, 255, gb, gb);
		gfx.PutPixel(x + 4, y, 255, gb, gb);
		gfx.PutPixel(x + 5, y, 255, gb, gb);

		gfx.PutPixel(x, y - 5, 255, gb, gb);
		gfx.PutPixel(x, y - 4, 255, gb, gb);
		gfx.PutPixel(x, y - 3, 255, gb, gb);
		gfx.PutPixel(x, y + 3, 255, gb, gb);
		gfx.PutPixel(x, y + 4, 255, gb, gb);
		gfx.PutPixel(x, y + 5, 255, gb, gb);
	}// else
}// Compose Frame
