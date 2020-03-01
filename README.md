# AbabeelCore-5-Stage-Pipelined-RV32i
## A RISC-V based 5-Stage Pipelined CPU
### Designed by Shahzaib Kashif

First of all get started by Cloning this repository in your machine.
```ruby
git clone https://github.com/shahzaibk23/AbabeelCore-5-Stage-Pipelined-RV32i
```

Create a .txt file and place the ***hexadecimal*** code of your instructions simulated on ***Venus*** (RISC-V Simulator)\
Each instruction's hexadecimal code must be on seperate line as following.

For example instructions, Go to Test Folder and copy the Test.mach code in the .txt file\
Inside the test file you'll find the C language code for the provided machine code as well as the Assembly instructions for the purpose of checking.

Then perform the following step
```ruby
cd /AbabeelCore5StagePipelined/src/main/scala/datapath
```
Open **InsMem.scala** with this command. You can also manually go into the above path and open the file in your favorite text editor.
```ruby
open InsMem.scala
```
Find the following line
``` python
loadMemoryFromFile(mem, "/home/hellcaster/Instruction.txt")
```
Change the .txt file path to match your file that you created above storing your own program instructions.\
After setting up the InsMem.scala file, go inside the Ababeel folder.
```ruby
cd AbabeelCore5StagePipelined
```
And enter
```ruby
sbt
```ababeelcore5stagepipelined
When the terminal changes to this type
```ruby
sbt:A>
```
Enter this command
```ruby
sbt:ababeelcore5stagepipelined> test:runMain datapath.Launcher Top
```
After success you will get a folder ***test_run_dir*** on root of your folder. Go into the examples folder inside.\
There you will find the folder named Top. Enter in it and you can find the Top.vcd file which you visualise on **gtkwave**
