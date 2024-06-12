#include <iostream>
#include <vector>
#include <chrono>
#include <iomanip>

// Function to multiply matrices
void matrixMul(const std::vector<float>& A, const std::vector<float>& B, std::vector<float>& C, int N) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            float sum = 0.0f;
            for (int k = 0; k < N; k++) {
                sum += A[row * N + k] * B[k * N + col];
            }
            C[row * N + col] = sum;
        }
    }
}

int main() {
    int N = 1024; // Matrix size, reduced for demonstration purposes
    std::vector<float> A(N * N);
    std::vector<float> B(N * N);
    std::vector<float> C(N * N);

    // Initialize matrices with random values
    for (int i = 0; i < N * N; i++) {
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    // Start timing
    auto start = std::chrono::high_resolution_clock::now();

    // Perform matrix multiplication
    matrixMul(A, B, C, N);

    // Stop timing and calculate the elapsed time
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << "Execution time: " << duration.count() << " ms" << std::endl;

    return 0;
}
