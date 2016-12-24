/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBGroupPendingPostsIntentTarget : FBIntentTarget {

	BOOL _showGroupContextHeader;
	NSString* _FBID;
	NSString* _source;

}

@property (nonatomic,copy,readonly) NSString * FBID;                     //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL showGroupContextHeader;              //@synthesize showGroupContextHeader=_showGroupContextHeader - In the implementation block
+(id)groupPendingPostsTargetWithFBID:(id)arg1 source:(id)arg2 showGroupContextHeader:(BOOL)arg3 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(BOOL)showGroupContextHeader;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)source;
@end
