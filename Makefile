all: ios android

ios: ios.c
	gcc ios.c -c

android: android.java
	javac android.java
	# I don't have javac on this machine

clean:
	rm *.o
