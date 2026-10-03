# Data Structures Lab Programs

A collection of small C programs demonstrating common data structures and algorithms. Most examples use fixed sample data; a few prompt for input or read and write text files.

## Code index

### Searching

| Source file | What it demonstrates |
|---|---|
| [`binary-search-integer.c`](binary-search-integer.c) | Binary search for an integer in a sorted integer array. |
| [`binary-search-string.c`](binary-search-string.c) | Binary search for a string in a sorted list of strings using `strcmp`. |
| [`linear-search-integer.c`](linear-search-integer.c) | Linear search for an integer in an array. |
| [`linear-search-string.c`](linear-search-string.c) | Repeated linear searches over strings entered by the user. |

### Sorting

| Source file | What it demonstrates |
|---|---|
| [`bubble-sort-integer.c`](bubble-sort-integer.c) | Bubble sort for generated integer values, printing the intermediate passes. |
| [`bubble-sort-string.c`](bubble-sort-string.c) | Bubble sort of a sample list of strings. |
| [`bubble_sort_using-file-data.c`](bubble_sort_using-file-data.c) | Reads integers from a text file, sorts them with bubble sort, and writes the result to another file. |

### Arrays and values

| Source file | What it demonstrates |
|---|---|
| [`integer-insert.c`](integer-insert.c) | Inserts an integer at a selected array index. |
| [`delete-integer.c`](delete-integer.c) | Deletes an integer from an array by index. |
| [`string-insert.c`](string-insert.c) | Inserts a string into an array of strings. |
| [`string-delete.c`](string-delete.c) | Deletes a string from an array by index. |
| [`find-correct-index-to-push-a-string.c`](find-correct-index-to-push-a-string.c) | Finds where a string should be inserted into an already sorted string list. |
| [`count-odd-even-number.c`](count-odd-even-number.c) | Counts the even and odd values in a sample array. |
| [`generate-random-value-for-array.c`](generate-random-value-for-array.c) | Generates and displays random floating-point values for an array. |

### Data structures and recursion

| Source file | What it demonstrates |
|---|---|
| [`stack-push-pop-operation.c`](stack-push-pop-operation.c) | Interactive stack push and pop operations. |
| [`circular-queue-insert-delete.c`](circular-queue-insert-delete.c) | Interactive insert and delete operations on a circular queue. |
| [`tower-of-hanoi.c`](tower-of-hanoi.c) | Recursive Tower of Hanoi solution that prints each disk move. |

### File input and output

| Source file | What it demonstrates |
|---|---|
| [`input-output-from-text-file.c`](input-output-from-text-file.c) | Reads integer values from a text file and copies them to an output file. |
| [`student-info-file.c`](student-info-file.c) | Collects student records, writes them to a text file, then displays the file. |

## Sample data files

| File | Used by |
|---|---|
| [`input-from-text-file.txt`](input-from-text-file.txt) | `input-output-from-text-file.c` |
| [`display-output-file.txt`](display-output-file.txt) | Output from `input-output-from-text-file.c` |
| [`unsorted_ value.txt`](unsorted_%20value.txt) | Input to `bubble_sort_using-file-data.c` (the filename contains a space). |
| [`sorted_value.txt`](sorted_value.txt) | Output from `bubble_sort_using-file-data.c` |
| [`student-info.txt`](student-info.txt) | Output from `student-info-file.c` |

## Compile and run

Compile a program with a C compiler such as GCC:

```sh
gcc binary-search-integer.c -o binary-search-integer
./binary-search-integer
```

Replace the source and output names with the program you want to run. On Windows, run the generated executable from Command Prompt or PowerShell. File-based examples expect their text files to be in the program's working directory.

## Notes

- Each `.c` file is an independent program with its own `main` function. Compile one source file at a time.
- Array insertion and deletion examples use zero-based indexes in their C code.
- `tempCodeRunnerFile.c` is an empty editor-generated placeholder and is not part of the index.
