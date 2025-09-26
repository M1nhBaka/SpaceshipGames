#include "framework/Application.h"
#include <iostream>
#include "framework/Core.h"
namespace ly 
{
	Application::Application()
		: mWindow{ sf::VideoMode(1024, 1440), "Light Years" },
		mTargetFrameRate{60.f},
		mTickClock{}
	{
	}
	void Application::Run() {
		mTickClock.restart();
		float accumulatedTime = 0.f;
		float targetDeltaTime = 1.f / mTargetFrameRate;
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
			float frameDeltaTime = mTickClock.restart().asSeconds();
			accumulatedTime += frameDeltaTime;
			while (accumulatedTime > targetDeltaTime)
			{
				accumulatedTime -= targetDeltaTime;
				TickInternal(targetDeltaTime);
				RenderInternal();
			}

			LOG("ticking at frame rate: %f", 1.f / frameDeltaTime);
		}
	}
	void Application::TickInternal(float deltaTime)
	{
		Tick();
	}
	void Application::RenderInternal() {
		mWindow.clear();

		Render();

		mWindow.display();
	}
	void Application::Render() {

		sf::CircleShape rect{ 100 };
		rect.setFillColor(sf::Color::Green);
		rect.setOrigin(50, 50);
		rect.setPosition(mWindow.getSize().x / 2.f, mWindow.getSize().y / 2.f);
		mWindow.draw(rect);

	}
	
	void Application::Tick() {
		/*std::cout << "ticking at framerate: " << 1.f / deltaTime << std::endl;*/
	}
}