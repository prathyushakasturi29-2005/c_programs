#include <stdio.h>
#define N 10
int main(int val)
{
    if (val <= N && printf("%d ", val) && main(val + 1)) {
    }
}
