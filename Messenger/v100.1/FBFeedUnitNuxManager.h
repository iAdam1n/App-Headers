/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedUnitNuxPresenterListener.h>

@class FBUserSession, FBFeedUnitNuxPresenter, NSMutableSet, NSMutableDictionary, NSString;

@interface FBFeedUnitNuxManager : NSObject <FBFeedUnitNuxPresenterListener> {

	FBUserSession* _session;
	FBFeedUnitNuxPresenter* _currentPresenter;
	NSMutableSet* _blacklistedNuxIDs;
	NSMutableDictionary* _registeredNuxPresenters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)showNext;
-(void)registerNuxPresenter:(id)arg1 ;
-(void)unregisterNuxPresenter:(id)arg1 ;
-(void)feedUnitWithNuxPresenterDidRelinquishView:(id)arg1 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 setNuxAtPosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 didAcquirePosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)clearCurrentPresenter;
-(id)initWithSession:(id)arg1 ;
@end
