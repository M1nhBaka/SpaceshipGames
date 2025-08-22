#include "framework/Application.h"

namespace ly 
{
	Application::Application()
		: mWindow{ sf::VideoMode(1024, 1440), "Light Years" }
	{
	}
	void Application::Run() {	
		while (mWindow.isOpen())
		{
			sf::Event WindowEvent;
			while (mWindow.pollEvent(WindowEvent))
			{
				if (WindowEvent.type == sf::Event::EventType::Closed)
				{
					mWindow.close();
				}
			}
		}
	}
}