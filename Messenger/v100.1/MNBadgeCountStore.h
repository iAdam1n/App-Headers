/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNBadgeCountUpdateWriting.h>

@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, FBUserSession, NSDictionary, NSString;

@interface MNBadgeCountStore : NSObject <MNBadgeCountUpdateWriting> {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;
	FBUserSession* _userSession;
	NSDictionary* _badgeCounts;

}

@property (copy) NSDictionary * badgeCounts;                        //@synthesize badgeCounts=_badgeCounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allBadgeCounts;
-(void)writeSourceState:(id)arg1 ;
-(void)setBadgeCounts:(NSDictionary *)arg1 ;
-(NSDictionary *)badgeCounts;
-(void)_clearBadgeCountHistory;
-(void)restoreBadgeCounts;
-(id)initWithUserSession:(id)arg1 userDefaults:(id)arg2 writeQueue:(id)arg3 ;
-(void)synchronizeBadgeCountsToDisk;
@end
