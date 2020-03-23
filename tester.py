import time
import os
import sys

wrong_answer = 0
progress = 1

def areSame(test, correct):
	if test == correct:
		return 1

	return 0

def loopF(loopNo,inputNo):
    global progress
    global wrong_answer

    loopDir = "loopFiles/loop" + str(loopNo) + "/loop.c"
    inputDir = "inputFiles/input" + str(inputNo)
    cp = "cp " + loopDir + " ./"
    cp = os.popen(cp)
    time.sleep(0.5)

    compileT = "gcc -ansi -Wall -pedantic-errors the1.c loop.c -o the1"
    compileT = os.popen(compileT)
    time.sleep(1)

    for i in range(1,11):
        run = "./the1 < " + inputDir + "/" + str(i) + ".txt"
        stream = os.popen(run)
        output = stream.read()

        outputDir = "outputs/" + str(loopNo) + "-" + str(i) + ".txt"


        f = open(outputDir,"r")
        correctOut = f.read()

        if areSame(output,correctOut) == 0:
            print "You failed at loop"+ str(loopNo) + " with " + str(i) + ".input"
            print "Correct Output:\n"+correctOut
            print "\nYour Output:\n"+output
            wrong_answer+=1
        progress +=1

for j in range(1,4):
    loopF(j,j)

print "You failed " + str(wrong_answer) + " times on 30 testcases."
