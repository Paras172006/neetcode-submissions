#include <vector>
#include <cmath>

class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::vector<int> stack;
        
        for (int ast : asteroids) {
            bool destroyed = false; // Maan lo shuru mein naya asteroid zinda hai
            
            // Collision sirf tab hoga jab: Stack mein kuch ho, Stack ka Top Positive(+) ho, aur Naya Asteroid Negative(-) ho
            while (!stack.empty() && stack.back() > 0 && ast < 0) {
                
                if (stack.back() < std::abs(ast)) {
                    // Purana asteroid chhota hai -> Wo phutega
                    stack.pop_back(); 
                    // Naya asteroid abhi bhi zinda hai, toh loop aage chalega naye collision ke liye
                } 
                else if (stack.back() == std::abs(ast)) {
                    // Dono barabar hain -> Dono phutenge
                    stack.pop_back();   // Purana gaya
                    destroyed = true;   // Naya bhi gaya
                    break;              // Naya phut gaya toh loop rok do
                } 
                else {
                    // Purana asteroid bada hai -> Naya wala phut jayega
                    destroyed = true;   
                    break;              // Naya phut gaya toh loop rok do
                }
            }
            
            // Loop khatam hone ke baad, agar naya asteroid abhi bhi zinda hai, toh stack mein daal do
            if (!destroyed) {
                stack.push_back(ast);
            }
        }
        
        return stack;
    }
};