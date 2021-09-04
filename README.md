# MiniProjetSE


The project is divided into two parts, so we have given the possibility to the user to choose the part they want to test through a menu.

![1](https://user-images.githubusercontent.com/44647099/132101684-9c341e72-6635-40e7-ae2a-cca8877a26ff.jpg)



* Part 1: A simplified UNIX command interpreter




The ultimate goal of this part is to implement a simplified Unix command interpreter in C. This interpreter will:

-Read and write environment variables.

-Navigate the file system and create aliases.

-Interactively execute commands relating to the PATH environment variable.

-Redirect the input / output of executed commands.

-Read commands from a file. 




-> We started by testing commands that were essential when working with a LINUX system:

pwd 

![3](https://user-images.githubusercontent.com/44647099/132102258-a8fbd003-e60d-45fe-a6ae-8a318a391afd.jpg)

 ls
 
 ![5](https://user-images.githubusercontent.com/44647099/132102288-f5fbad31-e354-43bc-b19b-403e4d25d7de.jpg)
 
  mkdir
  
  ![7](https://user-images.githubusercontent.com/44647099/132102302-ab0ae88b-436b-4dc1-9428-df80d22754f6.jpg)
  
  rmdir
   
  ![9](https://user-images.githubusercontent.com/44647099/132102323-7a6137c1-1a60-4d5b-87b3-cc763dcabf80.jpg)
   
  rm
    
  ![10](https://user-images.githubusercontent.com/44647099/132102352-58d17069-414f-41d5-b451-9a922500facb.jpg)
    
  cat
    
  ![11](https://user-images.githubusercontent.com/44647099/132102206-70fed919-d59d-45e1-9d64-a66ff91258c7.PNG)

  tee
    
 ![12](https://user-images.githubusercontent.com/44647099/132102207-6915d828-2bbf-4070-84e3-2c9a13cbd515.jpg)
    
  ps

  ![13](https://user-images.githubusercontent.com/44647099/132102209-a5238e9d-bb27-496f-9f3f-4fc6233486c6.jpg)
    
  wc
    
  ![14](https://user-images.githubusercontent.com/44647099/132102210-9272a7fd-b07e-4bd9-a1d1-f37d83c29216.PNG)
  ![15](https://user-images.githubusercontent.com/44647099/132102217-9c5c5342-0a46-4a2e-931f-73d474a8b443.jpg)
    
The purpose of this part is to recover the user's working directory. By running the interpreter, read a .txt file that we have called "profile" and where we have configured the environment variables "PATH" and "HOME" which will subsequently be used by
the interpreter.

Path E: / MiniSE | E: / MiniSE / other | E: / MiniSE / other / internal
Home E: / SE

These last two lines are used to position the working directory of the user having
launched the interpreter to E: / SE and also set the list of directories in which it
search in the following order: E: / MiniSE, E: / MiniSE / other and E: / MiniSE / other / internal.

In fact, in order to check the existence of the two variables in the profile file, it is necessary to proceed from
the following way:

-For the "Home" environment variable: you must extract all the part that begins with the character which is at position 6.

-For the "PATH" environment variable:

1 / It is necessary to extract all the part which begins with the character which is at the position n ° 6.

2 / Create a table that will contain all the directories mentioned in the
environment variable "PATH" and whose existence must be verified in the
"profile" file. To determine these directories, you must extract all the
characters of the character string extracted in step 1 / until reaching the
character ‘|’. Repeat this step until you reach the end of the chain
characters.


->
In the event that one of the two environment variables is not set in
the "profile" file, the interpreter will display an error message.

![1](https://user-images.githubusercontent.com/44647099/132102570-100ab79f-beff-4057-a8ba-43ae0758e544.PNG)
![2](https://user-images.githubusercontent.com/44647099/132102572-62072bdb-9e9c-4935-9116-5323f05f1ce3.PNG)
![3](https://user-images.githubusercontent.com/44647099/132102574-4f95b8d1-81ea-465e-b57f-c5347ef41fd2.PNG)

Shell navigation in the file system and creation of aliases

![16](https://user-images.githubusercontent.com/44647099/132102636-edd938ea-d272-402c-9e06-49da831f20a2.jpg)
![17](https://user-images.githubusercontent.com/44647099/132102637-678557dc-da26-4fd8-9055-db53e328a3e5.jpg)
![18](https://user-images.githubusercontent.com/44647099/132102638-4dfddb28-aae3-4407-a386-ffaf94b735de.jpg)
![19](https://user-images.githubusercontent.com/44647099/132102639-3b4b3145-2b51-433c-897e-61b12e85c147.jpg)
![20](https://user-images.githubusercontent.com/44647099/132102640-5f876693-dec4-4df8-bcab-5af69c02863d.jpg)
![21](https://user-images.githubusercontent.com/44647099/132102641-03be5644-5738-449e-8c49-0cf261f764da.jpg)

Execution of commands relating to the environment variable "PATH"

![22](https://user-images.githubusercontent.com/44647099/132102674-752d21e6-59c2-4fa4-8008-608450a4a6f1.jpg)
![23](https://user-images.githubusercontent.com/44647099/132102676-5abd2457-8ec3-4c42-9fde-f71531a5d8c0.jpg)

Redirection of I / O of executed commands

![4](https://user-images.githubusercontent.com/44647099/132102749-4c3e3ed6-d10c-4674-886b-569024e4d790.PNG)
![24](https://user-images.githubusercontent.com/44647099/132102759-7c3b775a-4de5-452d-8cce-126efbf89d06.jpg)
![25](https://user-images.githubusercontent.com/44647099/132102761-355b1c3c-ed23-4a3b-a09b-548746a42df0.jpg)
![26](https://user-images.githubusercontent.com/44647099/132102763-b3323813-07fd-4bfa-a71b-350877e26f8e.jpg)
![27](https://user-images.githubusercontent.com/44647099/132102766-ff473489-9991-49e0-a35a-57744a5da7be.jpg)
![28](https://user-images.githubusercontent.com/44647099/132102767-1a0b6452-e61a-47fc-8792-444e7dbc5233.jpg)

Reading a series of commands from a file

![29](https://user-images.githubusercontent.com/44647099/132102796-561874e8-a75e-4579-9b6f-4325d58381fe.jpg)
![30](https://user-images.githubusercontent.com/44647099/132102800-d211020d-a7aa-425d-87f3-93dffdfa7764.jpg)
![31](https://user-images.githubusercontent.com/44647099/132102801-9f2ce1cf-793e-41cf-a780-ae6470586dd0.PNG)



* Part 2 : scheduling algorithms


FIFO without preemption

![32](https://user-images.githubusercontent.com/44647099/132102847-120ce5be-d11b-463e-a30f-cc80c4e4d7b5.jpg)
![33](https://user-images.githubusercontent.com/44647099/132102849-811e235f-ccce-4754-bd33-f3472a3a7368.jpg)

round robin

![34](https://user-images.githubusercontent.com/44647099/132102882-5bc0db12-5941-4a12-8d61-07eed911298d.jpg)
![34](https://user-images.githubusercontent.com/44647099/132102887-26a0a69d-0ece-461c-9899-b11ba82114cc.PNG)

 Shortest job first
 
![35](https://user-images.githubusercontent.com/44647099/132102917-2c76666c-20ae-429e-aefb-b227e8290a02.jpg)
![36](https://user-images.githubusercontent.com/44647099/132102921-28e2f56e-fb27-49fe-9568-1cd8477e104d.jpg)

Priority

![37](https://user-images.githubusercontent.com/44647099/132102922-fa4801b4-7019-45cf-86b4-e4a9354a53bb.jpg)
![38](https://user-images.githubusercontent.com/44647099/132102923-f01fb346-100f-4c80-b77c-3961c701b613.jpg)
