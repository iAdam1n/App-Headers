/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemFeedStory;

@interface FBVideoHomeStoryState : NSObject {

	NSString* _storyID;
	FBMemFeedStory* _story;

}

@property (nonatomic,copy,readonly) NSString * storyID;              //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;               //@synthesize story=_story - In the implementation block
-(NSString *)storyID;
-(FBMemFeedStory *)story;
-(id)initWithID:(id)arg1 story:(id)arg2 ;
@end
