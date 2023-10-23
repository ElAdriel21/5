#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "5");

    float valor = 0;

    sf::Texture texture;
    texture.loadFromFile("chessw.png");
    sf::Sprite sprite(texture);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        valor += 0.1f;
        sprite.setRotation(valor);
        window.draw(sprite);

        window.display();
    }
}

