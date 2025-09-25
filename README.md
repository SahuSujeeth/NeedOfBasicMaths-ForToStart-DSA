# NeedOfBasicMaths-ForToStart-DSA
This is the Repo for the basics of the Maths for to start the DSA from the beginning...
# 🚀 Day 8 (Maths Basics for DSA)

Today I learned some **basic maths concepts** that are commonly used in Data Structures & Algorithms.  

---

## 📌 Topics Covered

### 1️⃣ Extracting Digits of a Number
- Use modulo (`% 10`) to extract the last digit.  
- Use division (`/ 10`) to remove the last digit.  
- Repeat until the number becomes 0.  

---

### 2️⃣ Counting Digits in a Number
- Continuously divide the number by 10.  
- Keep a counter for how many times division happens.  
- The counter gives the number of digits.  

---

### 3️⃣ Palindrome Check (Number)
- Reverse the number.  
- Compare the reversed number with the original.  
- If they are the same → It’s a palindrome.  

---

### 4️⃣ Reversing a Number
- Extract digits one by one from the original number.  
- Rebuild the number in reverse order.  

---

## 🕒 Complexity
- **Time Complexity:** `O(log10(n))` → depends on the number of digits.  
- **Space Complexity:** `O(1)`  

---

## ✅ Summary
Today’s progress:  
✔ Learned digit extraction  
✔ Learned digit counting  
✔ Understood palindrome check  
✔ Learned reversing a number  

These are the building blocks for solving advanced DSA problems.  

---
🔖 **Day 8 complete – Maths Basics for DSA ✅**

---

# 🚀 Day 9 – Number Theory Basics for DSA

Today I learned some **important math concepts** that are highly useful in DSA problems.  
The focus was on **time complexity improvements** for number-related problems.

---

## 📌 Topics Covered

### 1️⃣ Armstrong Number  
- **Definition**: A number is an Armstrong number if the sum of its digits raised to the power of number of digits equals the number itself.  
  Example: `153 = 1³ + 5³ + 3³`  
- **Time Complexity**: `O(log₁₀(N))` → because we process each digit once.

---

### 2️⃣ Printing All Divisors  
- Naive Approach: Iterate till `n` → `O(n)`  
- Optimized Approach: Iterate only till `sqrt(n)` and collect both divisors.  
- **Time Complexity**: `O(√n)`

---

### 3️⃣ Prime Number Check  
- Naive Approach: Check divisibility till `n-1` → `O(n)`  
- Optimized Approach: Check only till `sqrt(n)`  
- **Time Complexity**: `O(√n)`

---

### 4️⃣ GCD (Greatest Common Divisor)  
- Naive Approach: Loop from `min(a, b)` downwards until divisor found.  
- **Time Complexity**: `O(min(a, b))`

---

### 5️⃣ Euclidean Algorithm for GCD  
- Formula:  

gcd(a, b) = gcd(b, a % b) (until b becomes 0)

- Much faster compared to naive.  
- **Time Complexity**: `O(log φ(min(a, b)))` where φ ≈ 1.618 (Golden Ratio).

---

## ✅ Key Takeaways
- Learned to use **mathematical optimizations** to reduce time complexity.  
- Armstrong check uses **digit extraction**.  
- Divisors & Prime checks use **square root property**.  
- GCD can be done in **logarithmic time** using Euclidean Algorithm.  

---

📅 **Day 9 Completed!**
✨ With Day 9, the **Maths Basics for DSA** are now successfully completed!...

---
Here also i have to revise all the basic of the maths one by one...
......

