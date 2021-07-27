package p1;


public class Primes{


    public static boolean checkForPrime(int a){
		
        if(a<4) return a>1;
        for(int i=2;i<a/2;i++) 
			if (a%i==0) return false;
		
        return true;
    }}


