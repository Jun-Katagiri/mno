// src/main.cpp

#include "mno/commands.h"
#include <iostream>
#include <string>
#include <format>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: mno <command> [args]\n";
        return 1;
    }
    
    std::string command = argv[1];

    if (command == "add") {
        if (argc < 3) {
            std::cerr << "Usage: mno add \"<content>\"\n";
            return 1;
        }
        mno::add_note(argv[2]);
    } else {
        std::cerr << std::format("Unknown command: {}\n", command);
        return 1;
    }


    return 0;
}