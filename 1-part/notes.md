- `cout` (read as see-out): is a std out stream
- `<<`: is an operator output can be used to output to a location `cout << "Hello Wolrd"`
- `cin` (read as see-in): is std in stream
- `>>`: is the input operator used to read from a location

## Common data types

- int
- string
- double
- char
- boolean

## Gotchas

- `>>` is terminated by whitespace, tab, newline, whereas they are ignored in `>>`.
- If we want to read multiple words we gotta use `>>` multiple times.
- c++11 introduced `{}` as assignment which is better when wanting to convert values from different type so that the compiler can warn you.
- `constexpr <data-type>`: to define a variable as constant since compile time. and only values that are know in compile time are accepted.
- `const <data_type>`: to define constant does require to be know in compile time but must no longer be changed after initialization in runtime.
