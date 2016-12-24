/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GDURLMetadata;
@class NSURL, NSArray;

@interface GDFileTreeNode : NSObject {

	NSURL* _url;
	id<GDURLMetadata> _metadata;
	NSArray* _directoryContents;

}

@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) id<GDURLMetadata> metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSArray * directoryContents;               //@synthesize directoryContents=_directoryContents - In the implementation block
-(NSArray *)directoryContents;
-(void)setDirectoryContents:(NSArray *)arg1 ;
-(id)init;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(id<GDURLMetadata>)metadata;
-(void)setMetadata:(id<GDURLMetadata>)arg1 ;
@end
