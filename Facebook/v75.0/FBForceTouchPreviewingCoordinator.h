/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIViewControllerPreviewing, FBForceTouchHandler, FBNavigationCoordinator;
@class UIViewController, FBUserSession, NSMutableDictionary, FBIntent, NSString;

@interface FBForceTouchPreviewingCoordinator : NSObject <UIViewControllerPreviewingDelegate, UIGestureRecognizerDelegate> {

	UIViewController* _rootViewController;
	id<UIViewControllerPreviewing> _forceTouchPreviewingContext;
	id<FBForceTouchHandler> _peekingForceTouchHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	NSMutableDictionary* _forceTouchHandlerCache;
	FBIntent* _previousPeekingIntent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singletonWithViewController:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 ;
-(id)initWithViewController:(id)arg1 navigationCoordinator:(id)arg2 session:(id)arg3 ;
-(id)forceTouchHandlerForIntentTargetClass:(Class)arg1 ;
-(void)_logPeekingEventForIntent:(id)arg1 ;
-(void)_logPoppingEvent;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end
