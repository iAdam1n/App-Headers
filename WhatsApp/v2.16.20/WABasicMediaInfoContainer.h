/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSNumber;

@interface WABasicMediaInfoContainer : NSObject {

	NSString* _mediaUrl;
	NSString* _mimetype;
	NSData* _fileHash;
	NSNumber* _fileLength;
	NSData* _mediaKey;

}

@property (nonatomic,readonly) NSString * mediaUrl;                //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (nonatomic,readonly) NSString * mimetype;                //@synthesize mimetype=_mimetype - In the implementation block
@property (nonatomic,readonly) NSData * fileHash;                  //@synthesize fileHash=_fileHash - In the implementation block
@property (nonatomic,readonly) NSNumber * fileLength;              //@synthesize fileLength=_fileLength - In the implementation block
@property (nonatomic,readonly) NSData * mediaKey;                  //@synthesize mediaKey=_mediaKey - In the implementation block
-(NSString *)mimetype;
-(id)initWithUrl:(id)arg1 mimetype:(id)arg2 filehash:(id)arg3 fileLength:(id)arg4 mediaKey:(id)arg5 ;
-(NSString *)mediaUrl;
-(NSData *)fileHash;
-(NSData *)mediaKey;
-(NSNumber *)fileLength;
-(BOOL)isValidWithError:(out id*)arg1 ;
@end
