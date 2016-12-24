/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedUnitNuxPresenterListener.h>

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
-(void)clearCurrentPresenter;
-(void)registerNuxPresenter:(id)arg1 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 didAcquirePosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)unregisterNuxPresenter:(id)arg1 ;
-(void)feedUnitWithNuxPresenterDidRelinquishView:(id)arg1 ;
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)feedUnitWithNuxPresenter:(id)arg1 setNuxAtPosition:(CGPoint)arg2 inView:(id)arg3 inCell:(id)arg4 ;
-(void)showNext;
-(id)initWithSession:(id)arg1 ;
@end
