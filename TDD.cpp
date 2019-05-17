#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "templates.h"
#include <vector>

SCENARIO("Test Quicksort") {
    GIVEN("vector and arrays") {
        WHEN("Vector = (100 5 120 160 10 80 1) and Array = 100.252 5.2525 120.252 160.252 10.2525 80.2525 1.2525") {
            std::vector <int> v1;
            v1.push_back(100);
            v1.push_back(5);
            v1.push_back(120);
            v1.push_back(160);
            v1.push_back(10);
            v1.push_back(80);
            v1.push_back(1);
            double L[7];
            L[0] = 100.2525;
            L[1] = 5.2525;
            L[2] = 120.2525;
            L[3] = 160.2525;
            L[4] = 10.2525;
            L[5] = 80.2525;
            L[6] = 1.2525;
            THEN("After QuickSort, Vector = 1 5 10 80 100 120 160; Array = 1.2525 5.2525 10.2525 80.2525 100.252 120.252 160.252") {
                QuickSort(v1);
                QuickSort(L);
                REQUIRE(ContainerToString(v1) == "1 5 10 80 100 120 160");
                REQUIRE(ContainerToString(L) == "1.252500 5.252500 10.252500 80.252500 100.252500 120.252500 160.252500");
            }
        }
    }
}

