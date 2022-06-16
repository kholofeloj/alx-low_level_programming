# 0x06. C-Pointers, Arrays and Strings



### 0. strcat

* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte


```
char *_strcat(char *dest, char *src);
```


---


### 1. strncat

* The _strncat function is similar to the _strcat function, except that
	* it will use at most n bytes from src; and
	* src does not need to be null-terminated if it contains n or more bytes

```
char *_strncat(char *dest, char *src, int n);
```


---


### 2. strncpy

* The function copies a string

```
char *_strncpy(char *dest, char *src, int n);
```


---


### 3. strcmp

* The function that compares two strings

```
int _strcmp(char *s1, char *s2);
```


---


### 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy

* This function that reverses the content of an array of integers

```
void reverse_array(int *a, int n);
```


---


### 5. Always look up

* This is a function that changes all lowercase letters of a string to uppercase.

```
char *string_toupper(char *k);
```















