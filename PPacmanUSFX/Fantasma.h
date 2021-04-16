#pragma once
#include <SDL.h>
#include "GameObject.h"

class Fantasma : public GameObject {
private:
	//Vel. X y Y
	int velocidadX;
	int velocidadY;

	//Vel. de movimiento del fantasma en distineto eje eje
	int velocidadPatron;
	//

	int alcance;
	// Renderiza la pantalla
	SDL_Renderer* renderer = nullptr;

	// grafica del fantasma
	SDL_Texture* fantasmaTexture = nullptr;

public:
	//Constructor y destructor
	Fantasma(SDL_Renderer* _renderer, SDL_Texture* _fantasmaTexture, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla, int _velocidadPatron);
	//~Fantasma();

	//Metodos de acceso

	int getVelocidadX() { return velocidadX; }
	int getVelocidadY() { return velocidadY; }
	int getVelocidadPatron() { return velocidadPatron; }
	int getalcance() { return alcance; }
	void setVelocidadX(int _velocidadX) { velocidadX = _velocidadX; }
	void setVelocidadY(int _velocidadY) { velocidadY = _velocidadY; }
	void setVelocidadPatron(int _velocidadPatron) { velocidadPatron = _velocidadPatron; }
	void setalcance(int _alcance) { alcance = _alcance; }
	// varios

	// Manejador de eventos del fantasma
	//void handleEvent(SDL_Event& e);

	// Movimiento del fantasma
	void move();
	// Renderizando imagen del fantasma
	void render() override;

};