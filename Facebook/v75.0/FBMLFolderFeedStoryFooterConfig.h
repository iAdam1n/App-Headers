/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBMLFolderFeedStoryFooterConfig : NSObject {

	BOOL _shouldHideFooter;
	NSArray* _items;
	unsigned long long _activityBadgeCount;

}

@property (nonatomic,copy,readonly) NSArray * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long activityBadgeCount;              //@synthesize activityBadgeCount=_activityBadgeCount - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideFooter;                              //@synthesize shouldHideFooter=_shouldHideFooter - In the implementation block
-(id)initWithItems:(id)arg1 activityBadgeCount:(unsigned long long)arg2 ;
-(BOOL)shouldHideFooter;
-(id)initWithNoFooter;
-(unsigned long long)activityBadgeCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)items;
@end
