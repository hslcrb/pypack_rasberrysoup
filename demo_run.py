from rasberrysoup import quad, gold, dist, fourier, interest
import cmath

print("--- Rasberrysoup Demo Run ---")

# 1. Golden Ratio
print(f"1. Golden Ratio: {gold()}")

# 2. Quadratic Equation
# x^2 - 5x + 6 = 0
r1, r2 = quad(1, -5, 6)
print(f"2. Roots of x^2 - 5x + 6 = 0: {r1}, {r2}")

# 3. Distance
d = dist([0, 0, 0], [1, 2, 2])
print(f"3. Distance from origin to (1,2,2): {d}")  # Should be 3

# 4. Compound Interest
# 1000 currency, 5% rate, 10 periods
val = interest(1000, 0.05, 10)
print(f"4. 1000 at 5% for 10 periods: {val:.2f}")

print("-----------------------------")
