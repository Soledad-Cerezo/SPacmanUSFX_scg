#pragma once
#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include "GameObject.h"

class Fruta : public GameObject
{
private:
	/*tipo-fruit tipofruit;*/
	int frutitas;
	int tiempoVisible;
	int tiempoNoVisible;

	int contadorTiempoVisible;
	int contadorTiempoNoVisible;

public:
	// Renderiza la ventana
	SDL_Renderer* renderer = nullptr;

	// Array de las texturas de frutas;
	SDL_Texture* frutasTextures;


public:
	//Constructor y destructor
	Fruta(SDL_Renderer* _renderer, SDL_Texture* _frutasTextures, int _posicionX, int _posicionY, int _ancho, int _alto, int _anchoPantalla, int _altoPantalla);
	//~Fruta();

	//Metodos de acceso
	int getTiempoVisible() { return tiempoVisible; }
	int getTiempoNoVisible() { return tiempoNoVisible; }
	int getfrutitas() { return frutitas; }
	/*void setTipoFruit(tipo-frut _tipoFruit) { tipoFruit = _tipoFruit; }*/
	void setTiempoVisble(int _tiempoVisible) { tiempoVisible = _tiempoVisible; }
	void setTiempoNoVisble(int _tiempoNoVisible) { tiempoNoVisible = _tiempoNoVisible; }
	void setfrutitas(int _frutaImagenes) { frutitas = _frutaImagenes; }
	// Metodos varios

	// Maneja eventos de fruta
	//void handleEvent(SDL_Event& e);

	// Mostrar u ocultar las fruta
	void mostrar();
	// Renderizar texturade la fruta
	void render();

};

