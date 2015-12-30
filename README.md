Collection of App Store app headers for a handful of apps. These headers are unofficial. If you would like headers for free apps, I accept requests.

If you would like to grab headers but do not know how, below is how I did it: <br />
1. Install classdump-dyld from BigBoss. <br />
2. Find UUID of the App from /private/var/mobile/Containers/Bundle/Application (iOS 8 or later). <br />
3. Either in a Terminal app such as NewTerm or connected via SSH, type this but replace the capitals with the correct naming for you: classdump-dyld /private/var/mobile/Containers/Bundle/Application/UUIDHERE/APPNAME.app/BINARYNAME -o /var/root/ANYFOLDERNAMEHERE <br />
4. Enjoy. You now have headers in /var/root/ANYFOLDERNAMEHERE.
