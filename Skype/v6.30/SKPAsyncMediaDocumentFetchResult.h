/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPAsyncMediaDocumentFetchResult : NSObject {

	int _mediaStatus;
	NSString* _path;

}

@property (nonatomic,readonly) int mediaStatus;                   //@synthesize mediaStatus=_mediaStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(id)initWithMediaStatus:(int)arg1 filePath:(id)arg2 ;
-(int)mediaStatus;
-(NSString *)path;
@end
