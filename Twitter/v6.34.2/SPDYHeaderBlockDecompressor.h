/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@interface SPDYHeaderBlockDecompressor : NSObject {

	z_stream_s* _zlibStream;
	int _zlibStreamStatus;

}
-(unsigned long long)inflate:(char*)arg1 availIn:(unsigned long long)arg2 outputBuffer:(char*)arg3 availOut:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(id)init;
@end

