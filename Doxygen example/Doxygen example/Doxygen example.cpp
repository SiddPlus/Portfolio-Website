#include <iostream>

/**
 * @class Shape
 * @brief A base class representing a generic geometric shape.
 *
 * This class provides a protected member for storing the area
 * and a public accessor function to retrieve it.
 */
class Shape
{
protected:
    /// @var area
    /// @brief Stores the calculated area of the shape.
    int area;

public:
    /**
     * @brief Retrieves the calculated area of the shape.
     * @return The area as an integer.
     */
    int get_area() const
    {
        return area;
    }
};

/**
 * @class Rectangle
 * @brief Represents a rectangle, inheriting properties from Shape.
 *
 * This class calculates the area of the rectangle and stores it
 * in the inherited 'area' variable.
 */
class Rectangle : public Shape
{
private:
    /// @var length
    /// @brief The length of the rectangle.
    int length;

    /// @var width
    /// @brief The width of the rectangle.
    int width;

public:
    /**
     * @brief Calculates the area of the rectangle.
     *
     * Sets the private length and width, computes the product,
     * and stores it in the inherited 'area' member.
     *
     * @param l The length of the rectangle.
     * @param w The width of the rectangle.
     */
    void calculate_area(int l, int w)
    {
        length = l;
        width = w;
        area = length * width;
        std::cout << "Calculated area for a rectangle of " << length << "x" << width << "\n";
    }
};

/**
 * @brief Main entry point of the program.
 *
 * Demonstrates class instantiation, function calls, and inheritance.
 * @return 0 upon successful execution.
 */
int main()
{
    int rect_length = 5;
    int rect_width = 8;

    std::cout << "--- Inheritance & Function Demo ---\n";
    std::cout << "Starting area calculation program...\n";

    Rectangle r;

    r.calculate_area(rect_length, rect_width);

    std::cout << "The total area is: " << r.get_area() << "\n";

    return 0;
}