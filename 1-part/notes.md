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

### Gotchas

- `>>` is terminated by whitespace, tab, newline, whereas they are ignored in `>>`.
- If we want to read multiple words we gotta use `>>` multiple times.
- c++11 introduced `{}` as assignment which is better when wanting to convert values from different type so that the compiler can warn you.
- `constexpr <data_type>`: to define a variable as constant since compile time. and only values that are know in compile time are accepted.
- `const <data_type>`: to define constant does require to be know in compile time but must no longer be changed after initialization in runtime.
- `type{}` prevents narrowing while `type()` does not.
- Here we've no type coersion even using numbers, operations of `int` will be int, `double` will be double, `double` with `int` will be double, `string|char` will casted to int/double.
- we can write empty statements `if (x == 5); {y = 3};` will work but `y = 3` will be executed no matter what.

## Flow Control

- `if`, `else if`, `else`
- `switch(){  }`, `case val:` `default`
- Switch values must be `int`, `char`, `constexpr data_type` or `enum`. the case label must not be var also.
- `while (expression) {}`
- `for (var, express, statement) {}`

## Functions

- `square` means n\*n: expects int
- `return_type name() {}`, e.g: `void main() {}`

## Vectors

- aka array
- `vector<data_type> my_v = { 1, 2 };`
- access like `my_v[3]`, assign like `my_v[3] = val` must be same data_type
- get length `my_v.size()`
- the range of a vector `[0:my_y.size())`
- `for (int x : v) {}` means for `x` in `v`
- `my_v.push_back()` allows pushing values as last in the vector, it is called `member function call`
- yes code below works and does what you think:

```c
for (double temp; cin>>temp; ) // read into temp
    temps.push_back(temp); // put temp into vector
```

`temp` is scoped this way into the loop only. You will need to use something to terminate the input e.g: `|` or anything that is not a double (bc of temp).

- `vector<int> = v(5)` defines a vector of size 5

### Gotchas

- You can terminate most of the non-string data types input loop by passing something diff from their data_type but for string use `<C-z>` (Windows) or `<C-d>` (Unix)

# 5. Errors

## Types of Errors

- Compile Error, Link-time errors (when linker tries to to combine obj files into exe program), Runtime erros, Logic erros (found by the programmer looking for the erroneous result).
- First compiler shows `syntax erros` and then `type erros`
- the compiled parts of programed are known as `translation units`.
- an express `(func, var)` must be defined with the same types along the whole program if they do not they will not match

## Exepections

- `throw Bad_area{}`: means make an object of type `Bad_area` and throw it. the class for it must be defined
- use `try {} catch (Bad_area) {}` to handle unexpected behavior

## Bad Input

- We can test if last input succeded by checking `cin`

### Gotchas

- the std provies: `throw out_of_range()` by vectors, we've `throw runtime_error()`. those can be used also as types
- `e.what()` extracts error messages

```c
int main()
try {
// . . . our program . . .
    return 0; // 0 indicates success
}
catch (runtime_error& e) { // this means pass by reference
    cerr << "runtime error: " << e.what() << '\n';
    keep_window_open();
    return 1; // 1 indicates failure
}
```

- `catch(runtime_error& e)` means pass an object by reference
- `cerr` probably means character error (I wrote before read)
- if we pass `catch(runtime_error& e)` it won't deal with `out_of_range` so we can pass instead `expection` to deal with all kind of expection. or pass an unknown express with `catch (...)`
- in `std_lib_facilities.h` (custom file) there is `narrow_cast<type>(val)` that throws an error if the value will fit or not
