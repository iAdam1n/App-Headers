Collection of App Store app headers for a handful of apps. These are all grabbed by myself with classdump-dyld so are unofficial. All app headers here are from apps from the UK App Store. I'm accepting requests for free apps to grab headers for. However, these will not be updated much if at all due to not using them myself and not knowing when they get updated.

If you would like to grab headers but do not know how, below is how I did it: <br />
1. Install classdump-dyld from http://limneos.net/repo <br />
2. Find UUID of the App from /private/var/mobile/Containers/Bundle/Application (iOS 8). <br />
3. Either in a Terminal app such as NewTerm or connected via SSH, type this but replace the capitals with the correct naming for you: classdump-dyld /private/var/mobile/Containers/Bundle/Application/UUIDHERE/APPNAME.app/BINARYNAME -o /var/root/ANYFOLDERNAMEHERE <br />
4. Enjoy. You now have headers in /var/root/ANYFOLDERNAMEHERE.
