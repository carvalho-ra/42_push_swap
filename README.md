# Push_swap

### 💡 About the project

This project aims to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions.
Given 2 stacks a and b. Sort in ascending order numbers into stack a, using the following movements:

**sa** (swap a): Swap the first 2 elements at the top of stack a.  
**sb** (swap b): Swap the first 2 elements at the top of stack b.  
**ss** : sa and sb at the same time.  
**pa** (push a): Take the first element at the top of b and put it at the top of a.  
**pb** (push b): Take the first element at the top of a and put it at the top of b.  
**ra** (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.  
**rb** (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.  
**rr** : ra and rb at the same time.  
**rra** (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.  
**rrb** (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.  
**rrr** : rra and rrb at the same time.  

### 🛠️ Usage

compile the project using the provided Makefile: ```make```  
Runnig the executable followed by a list of arguments as parameters will output the list of movements to sort the list.  

./push_swap 2 1 -3 5

Use the command bellow for passing arguments list:

zsh: ```ARG="4 67 3 87 23”; ./push_swap ${=ARG}```  
bash: ```ARG="4 67 3 87 23"; ./push_swap $ARG```  

Use the command bellow for passing arguments list running the checker:

zsh: ```ARG="4 67 3 87 23”; ./push_swap ${=ARG} | ./checker ${=ARG}```  
bash: ```ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG```  

Use the command bellow for passing arguments list and count lines:

zsh: ```ARG="4 67 3 87 23”; ./push_swap ${=ARG} | wc -l```  
bash: ```ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l```  

### 📋 Results

![push_swap_img.png](push_swap_img.png)
