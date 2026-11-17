/******************************
* Автор: Чеботников Александр *
* Задание: Функции            *
* Вариант: 30                 *
******************************/

#include <iostream>
#include <cmath>

using namespace std;

double calculateNegativeSum(const double values[], int count, double leftBoundary, double rightBoundary) {
  double sum;

  sum = 0.0;

  for (int elementIndex = 0; elementIndex < count; ++elementIndex) {
    if (values[elementIndex] < 0 && (values[elementIndex] <= leftBoundary || values[elementIndex] >= rightBoundary)) {
      sum += values[elementIndex];
    }
  }

  return sum;
}

int main() {
  double leftBoundary;
  double rightBoundary;
  double firstArray[100];
  double secondArray[100];
  double firstSum;
  double secondSum;
  int firstCount;
  int secondCount;

  cin >> leftBoundary >> rightBoundary;

  if (!cin || !isfinite(leftBoundary) || !isfinite(rightBoundary) || leftBoundary >= rightBoundary) {
    cout << "INVALID\n";
    return 0;
  }

  cin >> firstCount;

  if (!cin || firstCount < 1 || firstCount > 100) {
    cout << "INVALID\n";
    return 0;
  }

  for (int elementIndex = 0; elementIndex < firstCount; ++elementIndex) {
    cin >> firstArray[elementIndex];

    if (!cin || !isfinite(firstArray[elementIndex]) || firstArray[elementIndex] < -1000 || firstArray[elementIndex] > 1000) {
      cout << "INVALID\n";
      return 0;
    }
  }

  cin >> secondCount;

  if (!cin || secondCount < 1 || secondCount > 100) {
    cout << "INVALID\n";
    return 0;
  }

  for (int elementIndex = 0; elementIndex < secondCount; ++elementIndex) {
    cin >> secondArray[elementIndex];

    if (!cin || !isfinite(secondArray[elementIndex]) || secondArray[elementIndex] < -1000 || secondArray[elementIndex] > 1000) {
      cout << "INVALID\n";
      return 0;
    }
  }

  firstSum = calculateNegativeSum(firstArray, firstCount, leftBoundary, rightBoundary);
  secondSum = calculateNegativeSum(secondArray, secondCount, leftBoundary, rightBoundary);

  cout << "Q: " << firstSum << '\n'
       << "W: " << secondSum << '\n';

  return 0;
}