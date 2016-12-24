/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStatusBarTrackingWindowDelegate.h>
#import <Facebook/FBStatusBarOverlayer.h>

@class FBStatusBarOverlay, FBTimer, UILabel, FBStatusBarTrackingWindow, NSString;

@interface FBApplicationStatusBarOverlayer : NSObject <FBStatusBarTrackingWindowDelegate, FBStatusBarOverlayer> {

	id _actionListener;
	FBStatusBarOverlay* _currentOverlay;
	FBTimer* _toastHideTimer;
	UILabel* _toastLabel;
	FBStatusBarTrackingWindow* _toastWindow;
	FBStatusBarTrackingWindow* _underlayWindow;
	BOOL _isPresenting;

}

@property (nonatomic,readonly) BOOL isPresenting;                   //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)overlayStatusBarWithOverlay:(id)arg1 actionListener:(id)arg2 ;
-(void)_showUnderlayWithColor:(id)arg1 ;
-(void)_showToastForOverlay:(id)arg1 ;
-(void)_hideUnderlay;
-(void)_hideToast;
-(void)statusBarTrackingWindow:(id)arg1 wasTappedInContainerView:(id)arg2 ;
-(void)removeOverlay:(id)arg1 ;
-(BOOL)isPresenting;
@end
