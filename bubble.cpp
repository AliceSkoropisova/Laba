#include <iostream>
#include <vector>
#include <algorithm> // для std::swap

// Функция сортировки пузырьком
void bubbleSort(std::vector<int>& arr) {
    // Проверка на пустой массив
    if (arr.empty()) {
        std::cout << "Массив пуст. Сортировка не требуется." << std::endl;
        return;
    }

    // Проверка на массив из одного элемента
    if (arr.size() == 1) {
        std::cout << "Массив содержит только один элемент. Сортировка не требуется." << std::endl;
        return;
    }

    // Основной алгоритм сортировки пузырьком
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Если на текущей итерации не было обменов, массив уже отсортирован
        if (!swapped) {
            break;
        }
    }
}

// Функция для вывода массива на экран
void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Пример использования
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Исходный массив: ";
    printArray(arr);

    bubbleSort(arr);

    std::cout << "Отсортированный массив: ";
    printArray(arr);

    // Тестирование с пустым массивом
    std::vector<int> emptyArr = {};
    bubbleSort(emptyArr);

    // Тестирование с массивом из одного элемента
    std::vector<int> singleElementArr = {42};
    bubbleSort(singleElementArr);

    return 0;
}