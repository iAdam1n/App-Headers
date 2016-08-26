/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelUpdateBackfeeding.h>

@protocol MNMontageViewModelMessageExpirationListening, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, FBTimer, NSString;

@interface MNMontageViewModelMessageExpirationChecker : NSObject <MNViewModelUpdateBackfeeding> {

	id<MNMontageViewModelMessageExpirationListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _montageThreadKeyToViewModelMap;
	FBTimer* _timer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListener:(id)arg1 queue:(id)arg2 ;
-(void)performBackfeedingUpdateForNewVersionOfViewModel:(id)arg1 ;
-(void)_runCheckForExpiredMessages;
@end
