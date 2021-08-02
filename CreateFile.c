/*
Used to create new regular file.
 int creat( File name, Permissions)
 File name : Path / File name
 Permissions : Octal number
 Return value : File Descriptor / -1 on failure

 Used to open the regular file
 int open(File name, Mode)
 File name : Path / File Name
 Mode : O_RDONLY / O_WRONLY / O_RDWR / O_CREATE
 Return value : File Descriptor / -1 on failure
 
  Read the contents of file
  int read(file descriptor, empty array, size of data to read);
  file descriptor : return value of open
  empty array : Which gets filled with the data
  size : Size of data to read

Write the contents into file
  int write(file descriptor, filled array, size of data to write);
  file descriptor : return value of open
  filled array : Which contains the data that we want to write
  size : Size of data to write
  
  close the file
  void close(file descriptor)
  file descriptor : File descriptor returned by open
  
  change the position of file
  leek(file descripto, displacement, from where)
  file descriptor : returned by open
  displacement : numbe of bytes to move
  from where : 0= for starting position, 1- current position , 2- end of the file

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <io.h>
#include <fcntl.h>

int main()
{
     int fd = 0, ret = 0;
     char arr[] = "Prajwal Kadam";
     char brr[11] = "\0";
     fd = creat("Atharva.txt", 0777);
     if (fd == -1)
     {
          printf("Unable to create file");
     }
     else
     {
          printf("File gets create with fd:%d\n", fd);
     }
     fd = open("Atharva.txt", O_RDWR);
     if (fd == -1)
     {
          printf("Unable to open the file\n");
     }
     else
     {
          printf("File open Succesfully\n");
     }
     ret = write(fd, arr, 10);

     if (ret != 0)
     {
          printf("Data Sucessfully writen in file\n");
     }
     lseek(fd, 0, SEEK_SET); //SEEK_SET-starting,SEEk_CUR-current position,SEEK End-End of the file
     ret = read(fd, brr, 10);
     //write(1,brr,10);
     printf("Data from file is:%s\n", brr);
     close(fd);
     return 0;
}