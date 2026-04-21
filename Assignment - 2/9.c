#include <stdio.h>
struct Point {
int x;
int y;
};
struct Point makePoint(int x, int y) {
struct Point p;
p.x = x;
p.y = y;
return p;
}
int main() {
struct Point p1 = makePoint(10, 20);
printf("Point: (%d, %d)\n", p1.x, p1.y);
return 0;
}