#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define N 2000000
#define TRUE 1
#define FALSE 0

int queue[N];
int f = 0, r = 0;

int IsEmpty() {
	if (r == f) {
		return TRUE;
	}
	else
		return FALSE;
}

void push(int x) {
	queue[++r] = x;
}

int pop() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return queue[++f];
}

int size() {
	if (IsEmpty() == TRUE)
		return 0;
	else
		return r - f;
}

int front() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return queue[f+1];
}

int back() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return queue[r];
}

int main() {
	int n, x;
	char str[6];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &str);

		if (!strcmp(str, "push")) {
			scanf("%d\n", &x);
			push(x);
		}
		else if (!strcmp(str, "pop")) {
			printf("%d\n", pop());
		}
		else if (!strcmp(str, "size")) {
			printf("%d\n", size());
		}
		else if (!strcmp(str, "empty")) {
			printf("%d\n", IsEmpty());
		}
		else if (!strcmp(str, "front")) {
			printf("%d\n", front());
		}
		else if (!strcmp(str, "back")) {
			printf("%d\n", back());
		}
	}

	return 0;
}
