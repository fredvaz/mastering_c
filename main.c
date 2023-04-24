
int mult(int x, int y);

// Adding a first feature: git push from user B
int add(int x, int y)
{
    return x + y;
}

// Adding a second feature when the third is on the remote: git push from user A
int sub(int x, int y)
{
    return x - y;
}

// Adding a third feature: git push from user B
int mult(int x, int y)
{
    return x * y;
}

// Adding a fifth feature: git push from user A
int scale(int x, int s)
{
    return x * s;
}

// Adding a feature: git push from user B to dev_test branch
float check(float x, float y)
{
    return x > y ? x : y;
}

// Adding a feature to become one commit ahead from the main branch
bool check(bool x, bool y)
{
    return x == y ? x : y;
}

// Added by user A
int main()
{

    // First git push from user A
    printf("Hello World!");

    return 0;
}

// Adding a fourth feature: git push from user B
int div(int x, int y)
{
    return x / y;
}

// git push from user B to dev_test branch
void foo()
{
}