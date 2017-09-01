#include <iostream>
#include "util/Util.h"
#include "main/Application.h"

int main() {
    Util::print("starting game");

    Application app;
    app.runMainLoop();

    return 0;
}