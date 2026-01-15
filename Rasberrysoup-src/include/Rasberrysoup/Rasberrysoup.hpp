/**
 * @file Rasberrysoup.hpp
 * @author Rheehose (Rhee Creative)
 * @brief A C++ library for simplifying complex mathematical formulas with simple keywords.
 * @version 1.0
 * @date 2026-01-15
 * 
 * @copyright Copyright (c) 2008-2026 Rheehose (Rhee Creative). All rights reserved.
 */

#ifndef RASBERRYSOUP_HPP
#define RASBERRYSOUP_HPP

#include <cmath>
#include <vector>
#include <complex>
#include <stdexcept>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace Rasberrysoup {

    /**
     * @brief Solves the quadratic equation ax^2 + bx + c = 0.
     * Keyword: "quad"
     */
    inline std::pair<std::complex<double>, std::complex<double>> quad(double a, double b, double c) {
        if (a == 0) throw std::invalid_argument("Coefficient 'a' cannot be zero.");
        std::complex<double> discriminant = std::sqrt(std::complex<double>(b * b - 4 * a * c));
        return { (-b + discriminant) / (2.0 * a), (-b - discriminant) / (2.0 * a) };
    }

    /**
     * @brief Calculates the Golden Ratio value.
     * Keyword: "gold"
     */
    inline constexpr double gold() {
        return 1.6180339887498948482;
    }

    /**
     * @brief Calculates the Euclidean distance between two points in N-dimensional space.
     * Keyword: "dist"
     */
    inline double dist(const std::vector<double>& p1, const std::vector<double>& p2) {
        if (p1.size() != p2.size()) throw std::invalid_argument("Vectors must have the same dimension.");
        double sum = 0;
        for (size_t i = 0; i < p1.size(); ++i) {
            sum += std::pow(p1[i] - p2[i], 2);
        }
        return std::sqrt(sum);
    }

    /**
     * @brief Simplifies Fourier Transform calculation (Discrete version).
     * Keyword: "fourier"
     */
    inline std::vector<std::complex<double>> fourier(const std::vector<double>& input) {
        size_t N = input.size();
        std::vector<std::complex<double>> output(N);
        for (size_t k = 0; k < N; ++k) {
            std::complex<double> sum(0, 0);
            for (size_t n = 0; n < N; ++n) {
                double angle = 2.0 * M_PI * k * n / static_cast<double>(N);
                sum += std::complex<double>(input[n]) * std::polar(1.0, -angle);
            }
            output[k] = sum;
        }
        return output;
    }

    /**
     * @brief Calculates the compound interest.
     * Keyword: "interest"
     */
    inline double interest(double principal, double rate, int periods) {
        return principal * std::pow(1.0 + rate, periods);
    }

} // namespace Rasberrysoup

#endif // RASBERRYSOUP_HPP
