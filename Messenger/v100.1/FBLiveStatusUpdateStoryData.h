/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLiveStatusUpdateStoryData : NSObject {

	NSString* _storyID;
	NSString* _cacheID;
	NSString* _videoID;

}

@property (nonatomic,copy,readonly) NSString * storyID;              //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cacheID;              //@synthesize cacheID=_cacheID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoID;              //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataID; 
-(NSString *)storyID;
-(id)initWithStoryID:(id)arg1 cacheID:(id)arg2 videoID:(id)arg3 ;
-(id)description;
-(id)debugDescription;
-(NSString *)cacheID;
-(NSString *)dataID;
-(NSString *)videoID;
@end
