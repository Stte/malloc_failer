# malloc_failer
To make testing mallocs fails a tiny bit easier. 
Malloc_failer fails mallocs one by one to help checking that malloc's are properly protected.


---

test_malloc expects function pointer that can be called without parameters.

Example:
```c
void	test_calloc()
{
	ft_calloc(1, 1);
}

int	main(void)
{
	test_mallocs(test_calloc);
	return (0);
}
```

---

To use on Mac you have to use Docker:

Build the Dockerfile:
```sh
docker build -t malloc-test .
```
Start a container:
```sh
docker run -dti --name malloc_tester -v $(pwd):/project/ malloc-test
```
Now you can, for example, run your Makefile in the docker container by running:
```sh
docker exec -ti malloc_tester make
```

There is a working demo in the demo folder.
You can run the demo by running the test.sh 

---

On linux you can just build your code with wrap and it should work.
```sh
gcc -Wl,-wrap,malloc
```
