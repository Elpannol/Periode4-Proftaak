#pragma once
#include <GL\freeglut.h>
#include "Model.h"
#include <GL\freeglut.h>
#include <iostream>
using namespace std;
#include "Window.h"

class View {
	public:
		View(Model * model);
	private:
		Model * _modelPtr;
};