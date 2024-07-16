// Project 8: Rotton Rams
// Author: Austin Spraggins
// Student ID: 0524626

#include <iostream>
#include <string>
#include <iomanip>

class Movie {
private:
    std::string title;
    std::string director;
    std::string genre;
    int year;
    int ratingCount;
    double rating;

public:
    // Constructors
    Movie() : title(""), director(""), genre(""), year(0), ratingCount(0), rating(0.0) {}

    Movie(std::string t, std::string d, std::string g, int y, int rc, double r)
        : title(t), director(d), genre(g), year(y), ratingCount(rc), rating(r) {}

    // Getters and Setters
    std::string getTitle() const { return title; }
    void setTitle(std::string t) { title = t; }

    std::string getDirector() const { return director; }
    void setDirector(std::string d) { director = d; }

    std::string getGenre() const { return genre; }
    void setGenre(std::string g) { genre = g; }

    int getYear() const { return year; }
    void setYear(int y) { year = y; }

    // Other member functions
    void rate(int score) {
        if (score < 1 || score > 100) {
            std::cout << "Invalid rating. Please enter a score between 1 and 100." << std::endl;
            return;
        }
        double newRating = (rating * ratingCount + score) / (ratingCount + 1);
        rating = newRating;
        ratingCount++;
    }

    double getRating() const { return rating; }

    void display() const {
    std::cout << "\n===== Movie Details =====" << std::endl;
    std::cout << "Title:    " << std::left << std::setw(30) << title << std::endl;
    std::cout << "Director: " << std::left << std::setw(30) << director << std::endl;
    std::cout << "Genre:    " << std::left << std::setw(30) << genre << std::endl;
    std::cout << "Year:     " << std::left << std::setw(30) << year << std::endl;
    std::cout << "Rating:   " << std::left << std::setw(30) << std::fixed << std::setprecision(1) << rating << " (" << ratingCount << " ratings)" << std::endl;
    std::cout << "==========================\n" << std::endl;
}
};

int main() {
    Movie movie1("Inception", "Christopher Nolan", "Sci-Fi/Thriller", 2010, 0, 0.0);

    movie1.rate(87);  // Tomatometer score
    movie1.rate(91);  // Audience score
    movie1.rate(88);  // Metacritic score

    movie1.display();

    return 0;
}