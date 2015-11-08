#include "lib/framework.hpp"
#include <iostream>
#include "Title.h"


enum Window {
  WIDTH  = 1000,
  HEIGHT = 1000
};

enum scene {
	FIRST, 
	SECOND
};


int main(){

  AppEnv env(Window::WIDTH, Window::HEIGHT,false,true);
  //テクスチャー
  Texture number("res/number.png");
  //文字表記
  Font font("res/msmincho.ttc");

  int Screen = FIRST;
  
  while (env.isOpen()) {

    env.begin();

	switch (Screen)
	{
	case FIRST:
		drawFillBox(-500,-500,1000,1000,Color::lime);

		font.draw("team.メガネ", Vec2f(-500.0f,32.0*3), Color::white);

		/*if (env.isPushButton(Mouse::LEFT)){
			return second;
		}*/
		env.flushInput();
	case SECOND:
		drawFillBox(-500,-500,1000,1000,Color::white);
	/*	if (env.isPushButton(Mouse::LEFT)){
			break;
		}*/

	}


    env.end();
  }
}
