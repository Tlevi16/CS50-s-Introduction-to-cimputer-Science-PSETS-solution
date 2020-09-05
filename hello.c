#include<stdio.h>
#include<cs50.h>

void SayHello();

int main(void)
{
    SayHello();
}

void SayHello()
{
    string Name = get_string("What is your name ?\n");
    printf("hello , %s\n", Name);
}
