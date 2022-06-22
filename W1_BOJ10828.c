#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_STACK_SIZE 10000
#define TRUE 1
#define FALSE 0

int stack[MAX_STACK_SIZE];
int peak = -1;

int IsEmpty() {
	if (peak < 0)
		return TRUE;
	else
		return FALSE;
}

int IsFull() {
	if (peak >= MAX_STACK_SIZE - 1)
		return TRUE;
	else
		return FALSE;
}

void push(int x) {
	stack[++peak] = x;
}

int pop() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return stack[peak--];
}

int size() {
	return peak + 1;
}

int top() {
	if (IsEmpty() == TRUE)
		return -1;
	else
		return stack[peak];
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
		else if (!strcmp(str, "top")) {
			printf("%d\n", top());
		}
	}

	return 0;
}