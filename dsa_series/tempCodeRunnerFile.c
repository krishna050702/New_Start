int
main()
{
    Stack* sp;
    sp = stackInitialize();

    push(sp, '+');
    char c = (char)pop(sp);
    printf("peek: %c", c);

    return 0;
}