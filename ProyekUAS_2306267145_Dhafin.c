#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define EPSILON 1e-6
#define MAX_ITER 100

// Parameter fisik
const double m = 68.1;  // massa (kg)
const double g = 9.8;   // gravitasi (m/s^2)
const double c = 12.5;  // koefisien drag (kg/s)

// Fungsi f(v) = mg - cv²
double f(double v) {
    return m * g - c * v * v;
}

// Turunan f'(v) = -2cv
double df(double v) {
    return -2 * c * v;
}

// Newton-Raphson Method
double newton_raphson(double initial_guess) {
    double v = initial_guess;
    for (int i = 1; i <= MAX_ITER; i++) {
        double fv = f(v);
        double dfv = df(v);

        if (fabs(dfv) < 1e-10) {
            printf("Turunan terlalu kecil. Iterasi dihentikan.\n");
            break;
        }

        double next_v = v - fv / dfv;

        if (fabs(next_v - v) < EPSILON) {
            printf("Konvergen dalam %d iterasi.\n", i);
            return next_v;
        }

        v = next_v;
    }

    printf("Gagal konvergen dalam %d iterasi.\n", MAX_ITER);
    return v;
}

int main() {
    double initial_guess = 10.0; // Tebakan awal yang masuk akal
    double result = newton_raphson(initial_guess);
    printf("Kecepatan terminal (Newton-Raphson): v = %.6f m/s\n", result);
    return 0;
}
