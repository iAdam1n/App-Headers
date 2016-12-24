/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface ImageResourceDatas : NSObject {

	BOOL _complete;
	NSData* _thumbnail;
	NSData* _fullSize;

}

@property (nonatomic,readonly) NSData * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) NSData * fullSize;               //@synthesize fullSize=_fullSize - In the implementation block
@property (nonatomic,readonly) BOOL complete;                   //@synthesize complete=_complete - In the implementation block
-(id)initWithThumbnail:(id)arg1 fullSize:(id)arg2 complete:(BOOL)arg3 ;
-(BOOL)complete;
-(NSData *)thumbnail;
-(NSData *)fullSize;
@end
