# File I/O (Input/Output)

In C programming, File I/O (Input/Output) refers to the process of reading data from files or writing data to files. It allows programs to interact with files stored on the system's storage media like the hard disk.

To work with File I/O in C, you need to include the <stdio.h> header file, which provides standard I/O functions like fopen, fclose, fread, fwrite, fprintf, fscanf, etc.

## Here's a brief overview of some essential File I/O functions in C:

# Opening and Closing Files:

FILE *fopen(const char *filename, const char *mode): Opens a file with the given filename and mode, and returns a file pointer. The mode specifies the type of file access, such as read, write, or append. Possible modes are "r" (read), "w" (write), "a" (append), "r+" (read and write), and more.
int fclose(FILE *stream): Closes the file associated with the given file pointer.
Reading from Files:

size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream): Reads data from the file into the buffer pointed to by ptr.
int fscanf(FILE *stream, const char *format, ...): Reads formatted data from the file, similar to scanf.
Writing to Files:

size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream): Writes data from the buffer pointed to by ptr to the file.
int fprintf(FILE *stream, const char *format, ...): Writes formatted data to the file, similar to printf.
File Positioning:

int fseek(FILE *stream, long offset, int origin): Sets the file position indicator for the file associated with stream.
long ftell(FILE *stream): Returns the current file position for the file associated with stream.
void rewind(FILE *stream): Sets the file position indicator to the beginning of the file.
Error Handling:

int ferror(FILE *stream): Checks if an error has occurred on the file associated with stream.
void perror(const char *s): Prints an error message to standard error (stderr).
Before performing any file I/O operations, ensure that you check the return values and handle errors appropriately. Also, always close files after you finish reading or writing to free up system resources.

File I/O is an essential aspect of C programming, enabling you to store and retrieve data from files, making it valuable for various applications like data processing, file manipulation, and more.
