import Foundation

func is_prime(n: Int) -> (Bool){
     if n < 2 {
     	  return false
     }

     let limit = Int(sqrt(Float(n)))
     if limit < 2 {
        return true
     }
    for i in 2...limit {
    	 if n % i == 0 {
              return false
         }
     }
     return true
}
