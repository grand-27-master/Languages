//brute force algorithm



#include <iostream> 
using namespace std; 
class Point 
{ 
	public: 
	int x, y; 
}; 

// sorting x-coordinate 
int compareX(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->x - p2->x); 
} 

// sorting y-coordinate 
int compareY(const void* a, const void* b) 
{ 
	Point *p1 = (Point *)a, *p2 = (Point *)b; 
	return (p1->y - p2->y); 
} 
 
// distance between two points 

float dist(Point p1, Point p2) 
{ 
	return sqrt( (p1.x - p2.x)*(p1.x - p2.x) + 
				(p1.y - p2.y)*(p1.y - p2.y) 
			); 
} 
 
// smallest distance between two points 

float bruteForce(Point P[], int n) 
{ 
	float min = FLT_MAX; 
	for (int i = 0; i < n; ++i) 
		for (int j = i+1; j < n; ++j) 
			if (dist(P[i], P[j]) < min) 
				min = dist(P[i], P[j]); 
	return min; 
} 


// minimum of two float values 

float min(float x, float y) 
{ 
	if(x<y)
		return x;
	else
		return y;
} 


//distance of a particular point

float stripClosest(Point strip[], int size, float d) 
{ 
	float min = d; 
	qsort(strip, size, sizeof(Point), compareY);  
	for (int i = 0; i < size; ++i) 
		for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j) 
			if (dist(strip[i],strip[j]) < min) 
				min = dist(strip[i], strip[j]); 

	return min; 
} 

float closestUtil(Point P[], int n) 
{ 
	if (n <= 3) 
		return bruteForce(P, n);  
	int mid = n/2; 
	Point midPoint = P[mid]; 
	float dl = closestUtil(P, mid); 
	float dr = closestUtil(P + mid, n - mid);  
	float d = min(dl, dr);  
	Point strip[n]; 
	int j = 0; 
	for (int i = 0; i < n; i++) 
		if (abs(P[i].x - midPoint.x) < d) 
			strip[j] = P[i], j++; 

	// Find the closest points in strip. 

	return min(d, stripClosest(strip, j, d) ); 
} 

// smallest distance 

float closest(Point P[], int n) 
{ 
	qsort(P, n, sizeof(Point), compareX); 
	return closestUtil(P, n); 
} 

int main() 
{ 
	Point P[] = {{2, 3}, {12, 30}, {40, 50}, {5, 1}, {12, 10}, {3, 4}}; 
	int n = sizeof(P) / sizeof(P[0]); 
	cout << "The smallest distance is " << closest(P, n); 
	return 0; 
} 
 
