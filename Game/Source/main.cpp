/*
 * Arcomage Tribute
 *
 * File:	main.cpp
 * Desc: 	Application entry point, provides game loop.
 *
 * Date: 	12/2006
 *
 * Copyright (C) 2007 - 2010 Xography. <www.gatewayheaven.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* 
#if defined(WIN32) || defined _MSC_VER 
#include <windows.h>
#include "main.h"

int WINAPI WinMain(HINSTANCE hInstance,
HINSTANCE hPrevInstance,
LPSTR lpCmdLine,
int nCmdShow) {
#else
*/
#include "main.h"

int main( int argc, char** argv )
{

	//#endif
	atexit(SDL_Quit);

	arcomage::Arcomage* game = new arcomage::Arcomage();

	try {
		while (!game->quit()) {
			game->run();
		}
	}
	catch (std::exception& e) {
		arcomage::Utility::getInstance()->
			exitError(std::string("Exception: ").append(e.what()).c_str());
	}


	return 0;
}

