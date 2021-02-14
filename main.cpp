#include <iostream>
#include <utility> //for std::swap 
#include <iterator> //for std::size 
#include <algorithm> // for std::sort

struct Rectangle
{
    int length{};
    int width{};
};



int main() {
Rectangle rects[5]{}; // declare an array of 5 Rectangle	
rects[0].length = 24;
std::cout << rects[0].length << '\n'; 

 constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numStudents{ std::size(scores) };
 
    int maxScore{ 0 }; // keep track of our largest score
    for (int student{ 0 }; student < numStudents; ++student)
    {
        if (scores[student] > maxScore)
        {
            maxScore = scores[student];
        }
    }
 
    std::cout << "The best score was " << maxScore << '\n';

  int array[]{ 30, 50, 20, 10, 40 };
	constexpr int length{ static_cast<int>(std::size(array)) };
 
	// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
		int smallestIndex{ startIndex };
 
		// Then look for a smaller element in the rest of the array
		for (int currentIndex{ startIndex + 1 }; currentIndex < length; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// then keep track of it
				smallestIndex = currentIndex;
		}
 
		// smallestIndex is now the smallest element in the remaining array
                // swap our start element with our smallest element (this sorts it into the correct place)
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	// Now that the whole array is sorted, print our sorted array as proof it works
	for (int index{ 0 }; index < length; ++index)
		std::cout << array[index] << ' ';
 
	std::cout << '\n';

  //and easier way to do it 
  	int array2[]{ 30, 50, 20, 10, 40 };
 
	std::sort(std::begin(array2), std::end(array2));
 
	for (int i{ 0 }; i < static_cast<int>(std::size(array2)); ++i)
		std::cout << array2[i] << ' ';
 
	std::cout << '\n';
 
    return 0;

}
