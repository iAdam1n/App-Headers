/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedStory, FBFeedToolbox, NSArray;

@interface FBVideoHomeUFIComponent : CKCompositeComponent {

	FBMemFeedStory* _story;
	FBFeedToolbox* _feedToolbox;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;

}

@property (nonatomic,readonly) FBMemFeedStory * story;                    //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;               //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingNodes;              //@synthesize trackingNodes=_trackingNodes - In the implementation block
+(id)newWithStory:(id)arg1 feedToolbox:(id)arg2 ;
-(FBFeedToolbox *)feedToolbox;
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(NSArray *)trackingNodes;
@end
