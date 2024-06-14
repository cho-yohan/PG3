#include <stdio.h>

template <typename T>

class Min {
public:
	T height;
	T width;

	Min(T height, T width) : height(height), width(width){}

	T Size() {
		return height + width;
	}
};

int main() {

	Min<int> c1(3, 3);
	Min<float> c2(3.0f, 3.0f);
	Min<double> c3(3.0, 3.0);

	printf("%d\n", c1.Size());
	printf("%f\n", c2.Size());
	printf("%lf\n", c3.Size());

	return 0;
}