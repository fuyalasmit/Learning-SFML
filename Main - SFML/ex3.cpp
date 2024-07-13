#include <SFML/Graphics.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 400), "Example 3", sf::Style::Default);
    window.setFramerateLimit(60);

    sf::CircleShape circle(50.f);
    circle.setPosition(sf::Vector2f(0.0f, 0.f));
    circle.setFillColor(sf::Color(250,205,155,100));

    sf::RectangleShape rect(sf::Vector2f(50.0f, 100.0f) );
    rect.setPosition(sf::Vector2f(400.0f,200.0f));
    rect.setOrigin(sf::Vector2f(0.0f, 0.0f));

    //sf::Lines

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            //if(event.type == sf::Event::KeyPressed)
        }

        //update
        circle.move(0.5f, 0.1f);
        circle.rotate(3.f);
        rect.move(-0.5f, -0.1f);
        rect.rotate(5.f);

        //draw
        window.clear();  // clear and draw a new frame

        //draw everything
        window.draw(circle);
        window.draw(rect);

        window.display();  //basically display a new frame
    }

    return 0;
}

