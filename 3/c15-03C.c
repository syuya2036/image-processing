// No.03-C double deg_cos(double deg);
#define PI 3.141592653589793
#include <stdio.h>
#include <math.h>

double deg2rad(double deg);
double deg_sin(double deg);
double deg_cos(double deg);


int main(void) {
	double deg[] = {0, 45, 90, 120, 180, -90, -120};
	int n = sizeof(deg) / sizeof(deg[0]);
	for (int i = 0; i < n; i++)
	{
		printf("%.1f [deg] = %f [rad] \n", deg[i], deg2rad(deg[i]));
		printf("sin(%.1f[deg]) = %f, cos(%.1f[deg]) = %f\n\n", deg[i], deg_sin(deg[i]), deg[i], deg_cos(deg[i]));
	}
	return 0;
}
// この下に各種関数を書く

double deg2rad(double deg) {
	return (deg * PI) / 180;
}

double deg_sin(double deg) {
	double rad = deg2rad(deg);
	return sin(rad);
}

double deg_cos(double deg) {
	double rad = deg2rad(deg);
	return cos(rad);
}