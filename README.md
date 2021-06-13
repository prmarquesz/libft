
<h1 align="center">
    📚 <a href="#"> Libft </a>
</h1>

<h3 align="center">
	My first project as a cadet at École 42. This is my own C library.
</h3>

<h4 align="center">
		Status: Finished ✅🚀
</h4>

<p align="center">
	<a href="#About">About</a> •
	<a href="#Features">Features</a> •
	<a href="#How-it-works">How it works</a> • 
	<a href="#Author">Author</a>
</p>

## 💻 About <a name='About'></a>

📚 This is my first project as a student at École 42. I have recoded some 
functions from the standard C library, as well as some other utility functions 
that I will use throughout my course.

⚠ This library is intended for use only for École 42 projects.

### 🎯 Briefing

Part 								| Functions
-----------------------------------	| --------- 
**Libc** Mandatory Functions		| ft_memset, ft_bzero, ft_memcpy, ft_memccpy,		 ft_memmove, ft_memchr, ft_memcmp, ft_strlen, ft_strlcpy, ft_strlcat, ft_strchr, 		ft_strrchr, ft_strnstr, ft_strncmp, ft_atoi, ft_isalpha, ft_isdigit, ft_isalnum,		 ft_isascii, ft_isprint, ft_toupper, ft_tolower, ft_calloc, ft_strdup
**Additional** Mandatory Functions	| ft_substr, ft_strjoin, ft_strtrim, ft_split, 			ft_itoa, ft_strmapi, ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
**List** Bonus Functions			| ft_lstnew, ft_lstadd_front, ft_lstsize, 			ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap

> The behavior of libc functions is defined in man (3). The others are briefly 
mentioned below.

---

## ⚙ Features <a name='Features'></a>

### String Functions

Function 	| Behavior
----------- | --------
ft_substr	| Allocates and returns a substring from the string `s`. The substring			 begins at index `start` and is of maximum size `len`.
ft_strjoin	| Allocates and returns a new string, which is the result of the 		concatenation of `s1` and `s2`.
ft_strtrim	| Allocates and returns a copy of `s1` with the characters specified				in `set` removed from the beginning and the end of the string.
ft_split	| Allocates and returns an array of strings obtained by splitting `s` 				using the character `c` as a delimiter. The array is ended by a NULL pointer.
ft_itoa		| Allocates and returns a string representing the integer received as an 			argument.
ft_strmapi	| Applies the function `f` to each character of the string `s` to 				create a new string resulting from successive applications of `f`.

### File Writing Functions
Function 		| Behavior
---------------	| --------
ft_putchar_fd	| Outputs the character `c` to the given file descriptor `fd`.
ft_putstr_fd	| Outputs the string `s` to the given file descriptor `fd`.
ft_putendl_fd	| Outputs the string `s` to the given file descriptor `fd`, 				followed by a newline.
ft_putnbr_fd	| Outputs the integer `n` to the given file descriptor `fd`.

### Linked List Functions
Function 		| Behavior
---------------	| --------
ft_lstnew		| Allocates and returns a new list element. The variable 				`content` is initialized with the value of the parameter `content`. The variable 			`next` is initialized to NULL.
ft_lstadd_front	| Adds the element `new` at the beginning of the list.
ft_lstadd_back	| Adds the element `new` at the end of the list.
ft_lstsize		| Counts the number of elements in a list.
ft_lstlast		| Returns the last element of the list.
ft_lstdelone	| Frees the memory of a list element, applying the function `del` 				to the content of the element.
ft_lstclear		| Same as `ft_lstdelone` but for all elements starting in `lst`
ft_lstiter		| Iterates the list `lst` and applies the function `f` to the 				content of each element.
ft_lstmap		| Iterates the list `lst` and applies the function `f` to the 				content of each element. Creates a new list resulting of the successive 				applications of the function `f`. The `del` function is used to delete the 					content of an element if needed.

---

## 🚀 How it works <a name='How-it-works'></a>

### Clone this repository
```git
git clone https://github.com/prmarquesz/libft.git
```
### Running Makefile
Go to the directory where you cloned and run the command
```Makefile
make
```
### Available Options
Command | Usage
------- | -----
`make` | Creates the library (equivalent to `make all` and `make libft.a`)
`make clean` | Removes the object files
`make fclean` | Removes the object files and the library
`make re` | Invokes `fclean` rule and then `all`

---
# 👨‍🚀 Author <a name='Author'></a>

<a href="#">
 <img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/69995036?v=4" width="100px;" alt=""/>
 <br />
 <sub><b>Paulo Roberto Marques</b></sub></a> <a href="#" title="Cadet">🚀</a>


Made with ❤️ by Paulo Roberto Marques 👋🏽  Get in Touch!

[![Linkedin Badge](https://img.shields.io/badge/-Paulo-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/prmarquesz/)](https://www.linkedin.com/in/prmarquesz/) 
[![Instagram Badge](https://img.shields.io/badge/-prmarquesz-red?style=flat-square&logo=Instagram&logoColor=white&link=https://www.instagram.com/prmarquesz/)](https://www.instagram.com/prmarquesz/)