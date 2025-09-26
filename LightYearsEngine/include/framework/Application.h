#pragma once
#include <SFML/Graphics.hpp>
namespace ly
{
	class Application 
	{
	public:
		Application();												
		void Run();
	private:
		void RenderInternal();
		void TickInternal(float deltaTime);
		sf::RenderWindow mWindow;
		float mTargetFrameRate;
		sf::Clock mTickClock;
		virtual void Tick();
		virtual void Render();
	
	};
}