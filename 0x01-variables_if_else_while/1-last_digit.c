
printf("Last digit of %d is %d %s\n", n, n % 10,
((n = 10) == 0) ? "and is 0"
: ((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);
}
