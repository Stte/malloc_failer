# malloc_failer
To make testing malloc fails a tiny bit easier. 
Malloc_failer fails mallocs one by one to help checking that mallocs are properly protected.


---

`malloc_failer` function expects function pointer that can be called without parameters.

Example:
```c
void	test_calloc(void)
{
	ft_broken_calloc(1, 1);
}

int	main(void)
{
	malloc_failer(test_calloc);
	return (0);
}
```

---

To use on Mac you have to use Docker:

Build the Dockerfile:
```sh
docker build -t malloc-failer .
```
Start a container:
```sh
docker run -dti --name malloc_tester -v $(pwd):/project/ malloc-failer
```
Now you can, for example, run your Makefile in the docker container by running:
```sh
docker exec -ti malloc_tester make
```

There is a working demo in the demo folder.
You can run the demo by running the test.sh 

---

On linux you should be able to just build your code with wrap and it should work.
```sh
gcc -Wl,-wrap,malloc
```
