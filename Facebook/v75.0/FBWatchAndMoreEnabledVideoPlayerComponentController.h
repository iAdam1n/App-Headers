/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBWatchAndBrowseVideoDelegate.h>
#import <Facebook/FBWatchAndMoreEventDelegate.h>

@class FBWatchAndMoreEnabledVideoPlayerComponent, NSString;

@interface FBWatchAndMoreEnabledVideoPlayerComponentController : CKComponentController <FBWatchAndBrowseVideoDelegate, FBWatchAndMoreEventDelegate>

@property (nonatomic,readonly) FBWatchAndMoreEnabledVideoPlayerComponent * component; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enterFullscreen;
-(void)didUpdateComponent;
-(id)componentController;
-(id)initWithComponent:(id)arg1 ;
-(void)navigateToWatchAndMore;
-(void)enterWatchAndMore;
-(void)castVideo;
-(void)enterWatchAndShop;
-(void)enterWatchAndMoreForType:(unsigned long long)arg1 ;
-(void)enterWatchAndInstall;
-(void)enterWatchAndLeadGen;
-(void)enterWatchAndStoreLocator;
-(void)enterWatchAndViewOffer;
-(void)enterWatchAndBrowse;
-(void)enterWatchAndMoreForLinkOpen;
-(void)_triggerTapPlayAction;
-(double)_videoAspectRatio;
-(id)watchAndMoreViewControllerWithViewManager:(id)arg1 displayController:(id)arg2 watchAndMoreType:(unsigned long long)arg3 isFromVideoCarousel:(BOOL)arg4 ;
-(id)watchAndMoreViewControllerV2WithViewManager:(id)arg1 displayController:(id)arg2 watchAndMoreConfiguration:(id)arg3 ;
-(void)_presentWatchAndBrowseForURL:(id)arg1 additionalBrowserSurface:(id)arg2 ;
@end
