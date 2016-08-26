/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBSaveDashboardIntentTarget : FBIntentTarget {

	NSString* _section;
	NSString* _notificationId;

}

@property (nonatomic,copy,readonly) NSString * section;                     //@synthesize section=_section - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationId;              //@synthesize notificationId=_notificationId - In the implementation block
+(id)saveDashboardTargetWithSection:(id)arg1 referrer:(id)arg2 notificationId:(id)arg3 ;
-(id)fallbackURLs;
-(NSString *)notificationId;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)section;
@end
