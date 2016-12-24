/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBFeedbackReactionsHandler.h>

@protocol FBFeedbackReactionsInputPresenting;
@class UIGestureRecognizer, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface FBFeedbackReactionsLongPressGestureHandler : NSObject <UIGestureRecognizerDelegate, FBFeedbackReactionsHandler> {

	id<FBFeedbackReactionsInputPresenting> _presenter;
	UIGestureRecognizer* _initialGestureRecognizer;
	UITapGestureRecognizer* _tapGesture;
	UIPanGestureRecognizer* _panGesture;
	CGPoint _initialTouchPoint;
	BOOL _firstTouchThresholdMet;
	BOOL _inPersistedDock;
	BOOL _shouldEnterPersistedStateOnLongpressRelease;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresenter:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)presentReactions;
-(void)cancelReactionsInputPresenter;
-(void)_setupPersistedDock;
-(BOOL)_checkIfGesturesIsCancel:(CGPoint)arg1 ;
-(void)_checkTapAndHandleDismiss:(id)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handleGesture:(id)arg1 ;
@end
