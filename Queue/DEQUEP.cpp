void insertFront(Deque* deque, int item) {
    if (isFull(deque)) {
        printf("Deque is full\n");
        return;
    }

    if (deque->front == -1) {
        deque->front = 0;
        deque->rear = 0;
    } else if (deque->front == 0) {
        deque->front = SIZE - 1;
    } else {
        deque->front = deque->front - 1;
    }

    deque->arr[deque->front] = item;
    printf("Inserted %d at the front\n", item);
}

// Insert an element at the rear of the deque
void insertRear(Deque* deque, int item) {
    if (isFull(deque)) {
        printf("Deque is full\n");
        return;
    }

    if (deque->front == -1) {
        deque->front = 0;
        deque->rear = 0;
    } else if (deque->rear == SIZE - 1) {
        deque->rear = 0;
    } else {
        deque->rear = deque->rear + 1;
    }

    deque->arr[deque->rear] = item;
    printf("Inserted %d at the rear\n", item);
}

// Delete an element from the front of the deque
int deleteFront(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1;
    }

    int item = deque->arr[deque->front];
    if (deque->front == deque->rear) {
        deque->front = -1;
        deque->rear = -1;
    } else if (deque->front == SIZE - 1) {
        deque->front = 0;
    } else {
        deque->front = deque->front + 1;
    }

    printf("Deleted %d from the front\n", item);
    return item;
}

// Delete an element from the rear of the deque
int deleteRear(Deque* deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1;
    }

    int item = deque->arr[deque->rear];
    if (deque->front == deque->rear) {
        deque->front = -1;
        deque->rear = -1;
    } else if (deque->rear == 0) {
        deque->rear = SIZE - 1;
    } else {
        deque->rear = deque->rear - 1;
    }

    printf("Deleted %d from the rear\n", item);
    return item;
}