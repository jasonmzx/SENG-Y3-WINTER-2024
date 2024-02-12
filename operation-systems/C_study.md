
### Void Pointer Return Type:

```c
void *runner_add(void *param) { 
    //...   
}
```

* The `void *` return type is used for functions that need to return some *data to the caller* but the type of data is not specified within the context of the function's interface.

* Useful in generic or flexible functions, such as those used for **thread routines** or generic data handling, where the exact type of the data being returned *may vary or may be unknown* inside the function's implementation.