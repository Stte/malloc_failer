# malloc_failer
Fails mallocs one by one.

test_malloc expects function pointer that can be called without parameters.

**Works only on linux.**

How to use on mac:
Run the dockerfile to make a image:
```sh
docker build -t malloc-test .
```
Start a container:
```sh
docker run -dti --name malloc_tester -v $(pwd):/project/ malloc-test
```
Now you can for example run your make file running:
```sh
docker exec -ti malloc_tester make
```

There is working demo in the demo folder.
You can run the demo by running the test.sh

