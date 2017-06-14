int bar(int b)
{
	return b + 1;
}

int foo(int a, int b, int c)
{
	int ret = 0;
	if ((a==1 && bar(b)) == 2 || c) {
		ret += 1;
	} else {
		ret += 2;
	}

	if (c == 0) {
		ret += 4;
	} else {
		ret += 8;
	}

	return ret;
}
