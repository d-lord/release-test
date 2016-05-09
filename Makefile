all: ios android

ios: ios.c
	gcc ios.c -c

android: android.c
	gcc android.c -c

clean:
	rm *.o
