//* Morty | The Reciever of Queue Messages

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

// Define a structure for message buffer.
struct my_msgbuf {
    long mtype;        // Message type
    char mtext[200];   // Message text
};

int main(void) {
    struct my_msgbuf buf; // Message buffer
    int msqid;            // Message queue ID
    key_t key;            // Key to identify the message queue

    //* Generate a unique key for the message queue using 'rick.c' and a character 'B'.
    if ((key = ftok("rick.c", 'B')) == -1) { //Same exact key Rick generates
        perror("ftok"); 
        exit(1);
    }

    //* Connect to the message queue using the generated key.
    if ((msqid = msgget(key, 0644)) == -1) {
        perror("msgget");
        exit(1);
    }

    printf("Morty: ready to receive messages, Grandpa.\n");

    // Infinite loop to continuously read messages from the queue.
    for (;;) {

        //* Recieve MSG, from Message Queue Id, into the buffer struct, given size of Text Buffer
        //* Evaluating to -1 is effectively asserting for a failure whilst performing the operation

        if (msgrcv(msqid, &buf, sizeof buf.mtext, 0, 0) == -1) {
            perror("msgrcv"); 
            exit(1);
        }

        // Print the received message.
        printf("Rick: \"%s\"\n", buf.mtext);
    }

    return 0; 
}
