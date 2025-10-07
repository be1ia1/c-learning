#include <stdio.h>
#include <stdbool.h>

bool is_point_in_area(double x, double y) {
    return (x * x + y * y < 1) && (x > y) && (x > -y);
}

void test_points() {
    // Test cases: {x, y, expected_result}
    double test_cases[][3] = {
        {0.5, 0.0, true},    // точка всередині області
        {0.0, 0.0, false},   // точка на межі (не входить)
        {1.0, 0.0, false},   // точка на колі (не входить)
        {0.5, 0.6, false},   // точка вище y=x (не входить)
        {-0.5, 0.0, false},  // точка зліва (не входить)
        {0.4, 0.2, true}     // точка всередині області
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int passed = 0;

    for (int i = 0; i < num_tests; i++) {
        double x = test_cases[i][0];
        double y = test_cases[i][1];
        bool expected = test_cases[i][2];
        bool result = is_point_in_area(x, y);

        if (result == expected) {
            passed++;
            printf("Test %d PASSED: (%.1f, %.1f)\n", i + 1, x, y);
        } else {
            printf("Test %d FAILED: (%.1f, %.1f)\n", i + 1, x, y);
        }
    }
    
    printf("\nPassed %d out of %d tests\n", passed, num_tests);
}

int main() {
    // Run tests
    test_points();
    
    // Original program
    double x, y;
    printf("\nEnter coordinates of point X:\n");
    scanf("%lf %lf", &x, &y);
    
    if (is_point_in_area(x, y)) {
        printf("Point is in the area\n");
    } else {
        printf("Point is not in the area\n");
    }
    
    return 0;
}