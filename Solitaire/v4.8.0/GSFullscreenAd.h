/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GSAdModel.h>

@interface GSFullscreenAd : GSAdModel {

	BOOL m_lockedOrientation;
	int m_gsOrientation;
	long long m_interfaceOrientation;
	BOOL m_isDisplayingBrowser;
	BOOL _didBeginNotificationUpdates;
	BOOL _didDisplay;

}

@property (readonly) BOOL lockedOrientation; 
@property (readonly) int gsOrientation; 
@property (readonly) long long interfaceOrientation; 
@property (readonly) BOOL isDisplayingBrowser; 
@property (assign,nonatomic) BOOL didBeginNotificationUpdates;              //@synthesize didBeginNotificationUpdates=_didBeginNotificationUpdates - In the implementation block
@property (assign,nonatomic) BOOL didDisplay;                               //@synthesize didDisplay=_didDisplay - In the implementation block
-(BOOL)displayFromViewController:(id)arg1 ;
-(BOOL)sendFetchDidFailNotificationWithError:(int)arg1 ;
-(void)applicationDidLoadExternalAppURL;
-(BOOL)sendFetchDidSucceedNotification;
-(BOOL)sendAdClickedThroughNotification;
-(void)clickthroughToBrowser:(id)arg1 ;
-(void)presentClickthroughViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissClickthroughViewController;
-(void)dismissSocialViewController;
-(void)updateOrientationPropertiesWithAllowOrientationChange:(id)arg1 ForceOrientation:(id)arg2 ;
-(void)startObservingOrientationChanges;
-(void)setDidBeginNotificationUpdates:(BOOL)arg1 ;
-(BOOL)didDisplay;
-(void)setDidDisplay:(BOOL)arg1 ;
-(BOOL)didBeginNotificationUpdates;
-(BOOL)lockedOrientation;
-(int)gsOrientation;
-(id)initWithDelegate:(id)arg1 GUID:(id)arg2 ;
-(void)dismissBrowserAnimated:(BOOL)arg1 ;
-(void)setFetchAllowed;
-(void)setThrottleTimeout:(long long)arg1 ;
-(BOOL)isDisplayingBrowser;
-(BOOL)sendWillDismissModalViewControllerNotification;
-(void)didChangeToInterfaceOrientation:(long long)arg1 gsOrientation:(int)arg2 ;
-(void)useCamera:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)interfaceOrientation;
-(void)setOrientation:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)fetch;
-(void)playVideo:(id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
-(void)lockOrientation;
@end
