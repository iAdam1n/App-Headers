/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBMessengerPageSubscriptionViewModel : FBValueObject <NSCopying> {

	NSString* _pageId;
	NSString* _pageName;
	NSString* _pageProfilePictureURL;
	NSString* _callToActionTitle;
	NSString* _callToActionDescription;
	NSString* _callToActionId;
	NSArray* _stationSubscriptions;

}

@property (nonatomic,copy,readonly) NSString * pageId;                               //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                             //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageProfilePictureURL;                //@synthesize pageProfilePictureURL=_pageProfilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionTitle;                    //@synthesize callToActionTitle=_callToActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionDescription;              //@synthesize callToActionDescription=_callToActionDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToActionId;                       //@synthesize callToActionId=_callToActionId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stationSubscriptions;                  //@synthesize stationSubscriptions=_stationSubscriptions - In the implementation block
-(NSString *)pageId;
-(NSString *)pageName;
-(NSString *)pageProfilePictureURL;
-(id)initWithPageId:(id)arg1 pageName:(id)arg2 pageProfilePictureURL:(id)arg3 callToActionTitle:(id)arg4 callToActionDescription:(id)arg5 callToActionId:(id)arg6 stationSubscriptions:(id)arg7 ;
-(NSString *)callToActionTitle;
-(NSString *)callToActionDescription;
-(NSString *)callToActionId;
-(NSArray *)stationSubscriptions;
@end
