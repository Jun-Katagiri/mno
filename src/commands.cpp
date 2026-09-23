// src/mno/commands.cpp
#include "mno/commands.h"
#include <format>
#include <iostream>

namespace mno {
    void add_note(const std::string& content) {
        // 今はまだ保存せず、コンソールに出力するだけにしている。
        std::cout << std::format("Added: {}\n", content);
    }
} // namespace mno
