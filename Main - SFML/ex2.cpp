//#include <SFML/Graphics.hpp>
//
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(600, 400), "Example 2", sf::Style::Default);
//    window.setFramerateLimit(60);
//
//    sf::CircleShape shape(50.f);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//            //if(event.type == sf::Event::KeyPressed)
//        }
//
//        //update
//
//        shape.move(0.3f, 0.f);
//
//        //draw
//        window.clear(sf::Color::Red);  // clear and draw a new frame
//        //draw everything
//        window.draw(shape);
//
//        window.display();  //basically display a new frame
//    }
//
//    return 0;
//}
//

