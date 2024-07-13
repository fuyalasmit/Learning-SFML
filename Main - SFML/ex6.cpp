#include <SFML/Graphics.hpp>


void Update(int &keyTime, sf::RectangleShape &square, sf::RenderWindow &window);
void Draw(sf::RenderWindow &window, sf::RectangleShape& square);



int main()
{
    int keyTime = 8;
    sf::RenderWindow window(sf::VideoMode(800, 800), "Simple Square Game");
    window.setFramerateLimit(60);

    sf::RectangleShape square(sf::Vector2f(100.0f, 100.0f));
    square.setFillColor(sf::Color::Red);
    square.setPosition(window.getSize().x / 2, window.getSize().y / 2);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }
        Update(keyTime,square,window);
        Draw(window,square);

    }
    return 0;
}

void Update(int& keyTime, sf::RectangleShape &square, sf::RenderWindow &window) {
    if (keyTime < 8) {
        keyTime++;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && square.getPosition().x > 0 ) {
        square.move(sf::Vector2f(-5.0f, 0.0f));
        keyTime = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && square.getPosition().x + square.getSize().x < window.getSize().x) {
        square.move(sf::Vector2f(5.0f, 0.0f));
        keyTime = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && square.getPosition().y > 0) {
        square.move(sf::Vector2f(0.0f, -5.0f));
        keyTime = 0;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && square.getPosition().y + square.getSize().y < window.getSize().y ) {
        square.move(sf::Vector2f(0.0f, 5.0f));
        keyTime = 0;
    }
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        square.setFillColor(sf::Color::Blue);
    }
    else {
        square.setFillColor(sf::Color::Red);
    }
}

void Draw(sf::RenderWindow &window, sf::RectangleShape &square) {
    window.clear(sf::Color::White);

    //draw
    window.draw(square);
    window.display();
}