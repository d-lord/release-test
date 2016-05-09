all: ios android

ios: ios.c
	gcc ios.c -c

android: android.java

clean:
	rm *.o
