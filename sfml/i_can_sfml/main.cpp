#include <SFML/Graphics.hpp>

int main()
{
	float x=100,y=100;
	float x_dif=0.5, y_dif=0.5;
	float x_windows=500, y_windows=500;

	sf::RenderWindow window(sf::VideoMode(x_windows, y_windows), "i can sfml!!");
    sf::CircleShape shape(100.f);

	shape.setFillColor(sf::Color::Green);

	sf::RectangleShape rectangle;
	rectangle.setSize(sf::Vector2f(100, 50));
	rectangle.setOutlineColor(sf::Color::Red);
	rectangle.setOutlineThickness(5);
	rectangle.setPosition(x,y);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		shape.setFillColor(sf::Color::Red);
		rectangle.move(-x_dif,0);
		x=+1;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		y=-1;
		shape.setFillColor(sf::Color::Blue);
		rectangle.move(0,-y_dif);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		shape.setFillColor(sf::Color::Green);
		rectangle.move(x_dif,0);
		x=-1;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		shape.setFillColor(sf::Color::White);
		rectangle.move(0,y_dif);
		y=+1;
	}

		
	//rectangle.setPosition(x,y);

		window.clear();
		window.draw(shape);
		window.draw(rectangle);
		window.display();
		//sf::RenderWindow window(sf::VideoMode(x_windows, 
//y_windows), "i can sfml!!");

	}

	return 0;
}
