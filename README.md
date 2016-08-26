Collection of App Store app headers for a handful of apps. These headers are unofficial. If you would like headers for free apps, I accept requests.

If you would like to grab headers but do not know how, below is how I did it: <br />
1. Install classdump-dyld from BigBoss. <br />
2. Find UUID of the App from /private/var/mobile/Containers/Bundle/Application (iOS 8 or later). <br />
3. Either in a Terminal app such as NewTerm or connected via SSH, type this but replace the capitals with the correct naming for you: classdump-dyld /private/var/mobile/Containers/Bundle/Application/UUIDHERE/APPNAME.app/BINARYNAME -o /var/root/ANYFOLDERNAMEHERE <br />
4. Enjoy. You now have headers in /var/root/ANYFOLDERNAMEHERE.

Please note that the above method is not working on iOS 9.3.3 (and possibly a bit older, haven't been able to test that). If you are running this iOS, then you need to install cycript and then follow the instructions below: <br />
1. Either in a Terminal app such as NewTerm or connected via SSH, type this and the following steps but replace the capitals with the correct naming for you: cycript -p APPNAME - (if this does not work, then follow step 2 above to find the binary name and use that) <br /> 
2. cy# dlopen("/usr/lib/libclassdumpdyld.dylib",RTLD_NOW)
3. cy# dumpBundle=@encode(id(id))(dlsym(RTLD_DEFAULT,"dumpBundle"))
4. cy# dumpBundle([NSBundle mainBundle])
5. Enjoy. You now have headers in /tmp/APPNAMEHERE.