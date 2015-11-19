/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class GADSlot, NSMutableSet, NSOperationQueue;

@interface GADIntermission : NSObject {

	BOOL _publisherIdleTimerDisabled;
	GADSlot* _slot;
	BOOL _statusBarWasOriginallyHidden;
	NSMutableSet* _activeParticipants;
	NSMutableSet* _deactivatingParticipants;
	NSOperationQueue* _deactivationQueue;
	BOOL _statusBarOverridden;

}
-(void)participantWillRelinquishScreen:(id)arg1 ;
-(void)participantDidRelinquishScreen:(id)arg1 ;
-(void)participantWillOverrideStatusBarVisibility:(id)arg1 ;
-(void)cleanUpDeallocatedParticipants;
-(void)applicationWillEnterForegroundWithNotification:(id)arg1 ;
-(id)activeParticipants;
-(void)willEnd;
-(void)dealloc;
-(id)init;
-(void)begin;
-(void)didEnd;
-(void)addParticipant:(id)arg1 ;
-(id)initWithSlot:(id)arg1 ;
@end

