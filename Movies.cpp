/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Movie.cpp
 * Author: Dan
 * 
 * Created on March 17, 2019, 2:08 PM
 */

#include "Movies.h"
#include<iostream>
using namespace std;

Movies::Movies() : topTitles(3), topTitleYears(3), topTitleRatings(3) {  //initializing all three member vectors with size 3. Adjust all sizes (to same amounts) to increase or decrease the size of list.
}

void Movies::Print() {
    for (int i = 0; i < topTitleRatings.size(); i++) {
        cout << "Movie Title: " << topTitles.at(i) << "\t\tRelease Year: " << topTitleYears.at(i) <<
                "\t\tRated: " << topTitleRatings.at(i) << endl;
    }
}

void Movies::AskForTopTitles(){
    int userYear;
    string userRating = "Nothing";
    
    unsigned int i;
    for (i=0; i < 3; i++) {
        cout << "Enter a favorite movie" << endl;
        getline(cin,topTitles.at(i));
        cout << "What year was that one released?" << endl;
        cin >> userYear;
        while (userYear < 1900 || userYear > 2019) {
            cout << "That's not right. What year was it?" << endl;
            cin >> userYear;
        }
        topTitleYears.at(i) = userYear;
        cout << "What was that one rated?" << endl;
        cin >> userRating;
        while ((userRating != "G") && (userRating != "PG") && (userRating != "PG-13") &&
                (userRating != "R") && (userRating != "M")) {
            cout << "Please enter either G, PG, PG-13, R, or M" << endl;
            cin >> userRating;
        }
        topTitleRatings.at(i) = userRating;
        cin.ignore();
    }
} 
    

