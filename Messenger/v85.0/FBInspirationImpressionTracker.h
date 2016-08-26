/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStateMachineDelegate.h>

@class FBInspirationLogger, FBStateMachine, NSString, NSDate;

@interface FBInspirationImpressionTracker : NSObject <FBStateMachineDelegate> {

	FBInspirationLogger* _logger;
	FBStateMachine* _stateMachine;
	NSString* _mediaType;
	NSDate* _lastImpressionStartTime;
	NSString* _impressionEndReason;
	NSString* _compositionID;
	NSString* _cameraOrientation;

}
-(id)initWithLogger:(id)arg1 ;
-(void)feedCameraImpressionStarted;
-(void)feedCameraImpressionEndedWithMediaType:(id)arg1 reason:(id)arg2 ;
-(void)fullScreenCameraImpressionStarted;
-(void)composerPostedWithPrompt:(BOOL)arg1 compositionID:(id)arg2 ;
-(void)composerCancelledWithCompositionID:(id)arg1 ;
-(void)editingViewImpressionStarted;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(void)fullScreenCameraImpressionEndedWithMediaType:(id)arg1 reason:(id)arg2 ;
-(void)editingViewImpressionEndedWithMediaType:(id)arg1 reason:(id)arg2 ;
-(void)composerStartedWithCompositionID:(id)arg1 ;
-(BOOL)isTrackingImpression;
-(void)dealloc;
-(void)_transitionToState:(id)arg1 ;
-(void)didChangeOrientation:(id)arg1 ;
@end
