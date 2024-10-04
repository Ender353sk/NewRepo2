#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <windows.h>

// Функція для зміни кольору тексту
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Функція для відображення ялинки
void printTree(const std::vector<std::vector<char>>& tree) {
    for (const auto& level : tree) {
        for (const char& ch : level) {
            if (ch == '*') setColor(2); // зелений
            else if (ch == '@'  ch == '₴'  ch == '%' || ch == '#') setColor(6); // жовтий
            std::cout << ch;
        }
        std::cout << std::endl;
        setColor(7); // повернення до стандартного кольору
    }
}

// Функція для запису ялинки у файл
void saveTreeToFile(const std::vector<std::vector<char>>& tree, const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& level : tree) {
        for (const char& ch : level) {
            file << ch;
        }
        file << std::endl;
    }
    file.close();
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    int n;
    std::cout << "Введіть кількість рівнів ялинки: ";
    std::cin >> n;

    std::vector<std::vector<char>> tree;
    int width = n * 2 - 1;

    for (int k = 1; k <= n; ++k) {
        for (int i = 0; i < k; ++i) {
            std::vector<char> level(width, ' ');
            for (int j = 0; j <= i * 2; ++j) {
                char decoration = '*';
                if (rand() % 10 < 2) { // 20% ймовірність
                    char toys[] = { '@', '₴', '%', '#' };
                    decoration = toys[rand() % 4];
                }
                level[width / 2 - i + j] = decoration;
            }
            tree.push_back(level);
        }
    }

    // Додаємо стовбур
    for (int i = 0; i < n / 2; ++i) {
        std::vector<char> trunk(width, ' ');
        trunk[width / 2] = '*';
        tree.push_back(trunk);
    }

    printTree(tree);
    saveTreeToFile(tree, "tree.txt");

    return 0;
}