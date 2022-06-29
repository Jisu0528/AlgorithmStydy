#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 10000
#define TRUE 1
#define FALSE 0

int deque[N];
int f = 5000, r = 5000;

int IsEmpty() {
	if (r == f) {
		return TRUE;
	}
	else
		return FALSE;
}

void push_front(int x) {
	deque[f--] = x;
}

void push_back(int x) {
	deque[++r] = x;
}

int pop_front() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return deque[++f];
}

int pop_back() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return deque[r--];
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
		return deque[f + 1];
}

int back() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return deque[r];
}

int main() {
	int n, x;
	char str[15];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", &str);

		if (!strcmp(str, "push_front")) {
			scanf("%d\n", &x);
			push_front(x);
		}
		else if (!strcmp(str, "push_back")) {
			scanf("%d\n", &x);
			push_back(x);
		}
		else if (!strcmp(str, "pop_front")) {
			printf("%d\n", pop_front());
		}
		else if (!strcmp(str, "pop_back")) {
			printf("%d\n", pop_back());
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