# Data Structures Lab Final — Quick Reference

## 1. FAST INDEX

| Topic | File |
|---|---|
| Linear Search – Integer | `linear-search-integer.c` |
| Linear Search – String | `linear-search-string.c` |
| Binary Search – Integer | `binary-search-integer.c` |
| Binary Search – String | `binary-search-string.c` |
| Bubble Sort – Integer | `bubble-sort-integer.c` |
| Bubble Sort – String | `bubble-sort-string.c` |
| Bubble Sort + File | `bubble_sort_using-file-data.c` |
| Integer Insert | `integer-insert.c` |
| Integer Delete | `delete-integer.c` |
| String Insert | `string-insert.c` |
| String Delete | `string-delete.c` |
| Sorted String Insert Position | `find-correct-index-to-push-a-string.c` |
| Stack Push/Pop | `stack-push-pop-operation.c` |
| Circular Queue Insert/Delete | `circular-queue-insert-delete.c` |
| Tower of Hanoi | `tower-of-hanoi.c` |
| File Input/Output | `input-output-from-text-file.c` |
| Student File + Struct | `student-info-file.c` |
| Count Odd/Even | `count-odd-even-number.c` |
| Random Array | `generate-random-value-for-array.c` |

## 2. WHAT TO REMEMBER

### Array insertion
Core idea: shift RIGHT, then insert.
```c
for(int i=n; i>loc; i--)
    arr[i] = arr[i-1];

arr[loc] = item;
n++;
```

### Array deletion
Core idea: shift LEFT.
```c
for(int i=loc; i<n-1; i++)
    arr[i] = arr[i+1];

n--;
```

### String insertion
Same shift-right idea, but use `strcpy()`.
```c
for(int i=n; i>loc; i--)
    strcpy(arr[i], arr[i-1]);

strcpy(arr[loc], item);
n++;
```

### String deletion
Same shift-left idea, but use `strcpy()`.
```c
for(int i=loc; i<n-1; i++)
    strcpy(arr[i], arr[i+1]);

n--;
```

### Linear search
Check every element one by one.
```c
for(int i=0; i<n; i++){
    if(arr[i] == target){
        // found
        break;
    }
}
```
For strings:
```c
if(strcmp(arr[i], target) == 0)
```

### Binary search
REQUIRES a sorted array.
```c
int beg=0, end=n-1;

while(beg <= end){
    int mid=(beg+end)/2;

    if(arr[mid] == target) break;
    else if(arr[mid] > target) end=mid-1;
    else beg=mid+1;
}
```
For strings, replace comparisons with `strcmp()`:
- `strcmp(a,b) == 0` → equal
- `> 0` → first string comes after second
- `< 0` → first string comes before second

### Bubble sort
Core idea: compare adjacent elements and swap.
```c
for(int j=1; j<=n-1; j++){
    for(int i=0; i<n-j; i++){
        if(arr[i] > arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
```
For strings:
```c
if(strcmp(a[i], a[i+1]) > 0){
    strcpy(temp,a[i]);
    strcpy(a[i],a[i+1]);
    strcpy(a[i+1],temp);
}
```

### Stack
LIFO = Last In, First Out.

Push:
```c
top++;
stk[top]=item;
```

Pop:
```c
item=stk[top];
top--;
```

Important:
- Empty → `top == -1`
- For an array of size 5, full condition should normally be `top == 4` (or `top >= 4`).

### Circular Queue
FIFO = First In, First Out.

Main variables:
- `f` = FRONT
- `r` = REAR

Insert:
- If first item → `f=1, r=1`
- If `r==max` → `r=1`
- Otherwise → `r++`

Delete:
- If only one item → `f=0, r=0`
- If `f==max` → `f=1`
- Otherwise → `f++`

### Tower of Hanoi
Base case:
```c
if(n == 1)
    printf(...);
```

Recursive pattern:
```c
Tower(n-1, source, destination, auxiliary);
move source -> destination;
Tower(n-1, auxiliary, source, destination);
```

Number of moves:
`2^n - 1`

### File I/O
Open:
```c
FILE *fp;
fp=fopen("file.txt","r");
```

Read:
```c
fscanf(fp,"%d",&arr[i]);
```

Write:
```c
fprintf(fp,"%d ",arr[i]);
```

Close:
```c
fclose(fp);
```

For character-by-character reading:
```c
while((ch=fgetc(fp)) != EOF)
    printf("%c",ch);
```

## 3. VERY COMMON MODIFICATIONS

### Integer → String
Add:
```c
#include <string.h>
```
Change:
```c
int arr[10];
```
to:
```c
char arr[10][20];
```
Use:
```c
strcmp()
strcpy()
```
instead of numeric `==`, `>`, and direct assignment.

### Search → Sort
Search has one target and a found/not-found condition.
Sorting needs nested loops and adjacent comparison.

### Insert → Delete
Insert:
- shift RIGHT
- put item
- `n++`

Delete:
- shift LEFT
- `n--`

### Linear Search → Binary Search
Linear:
```text
check every item
```
Binary:
```text
sorted array
→ middle
→ left or right half
→ repeat
```

## 4. EXAM SPEED MAP

If teacher asks... → open:

- Search an integer → `linear-search-integer.c`
- Search a string → `linear-search-string.c`
- Faster search on sorted integers → `binary-search-integer.c`
- Faster search on sorted strings → `binary-search-string.c`
- Sort integers → `bubble-sort-integer.c`
- Sort strings → `bubble-sort-string.c`
- Insert integer → `integer-insert.c`
- Delete integer → `delete-integer.c`
- Insert string → `string-insert.c`
- Delete string → `string-delete.c`
- Stack → `stack-push-pop-operation.c`
- Queue → `circular-queue-insert-delete.c`
- Recursion → `tower-of-hanoi.c`
- Read/write text file → `input-output-from-text-file.c`
- Student records → `student-info-file.c`

## 5. IMPORTANT NOTES FROM YOUR ACTUAL REPOSITORY

1. Most array insertion/deletion examples use **zero-based index**.
2. `linear-search-string.c` uses positions starting from **1**, so do not confuse it with the other programs.
3. Binary search only works correctly when the data is sorted.
4. File programs need their `.txt` files in the same working directory.
5. `bubble_sort_using-file-data.c` expects the filename **`unsorted_ value.txt`** with a space.
6. `tempCodeRunnerFile.c` is empty/editor-generated; ignore it.
7. Each `.c` file has its own `main()`, so compile/run one source file at a time.
8. `system("cls")` in the circular queue is Windows-specific; it is only for clearing the console and is not part of the queue logic.

## 6. LAST-MINUTE CHECKLIST

- [ ] Extract the ZIP.
- [ ] Open the whole folder in VS Code.
- [ ] Keep README open.
- [ ] Test with internet OFF.
- [ ] Search each major topic once.
- [ ] Keep a USB backup.
- [ ] Keep the `.txt` files together with the `.c` files.
- [ ] Do NOT depend on GitHub during the exam.
