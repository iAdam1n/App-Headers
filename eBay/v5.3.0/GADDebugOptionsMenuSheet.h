/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIAlertView, NSURL, UIViewController;

@interface GADDebugOptionsMenuSheet : NSObject <UIAlertViewDelegate> {

	NSString* _adDebugDialogString;
	UIAlertView* _creativeInformationAlertView;
	NSURL* _inAppPreviewURL;
	UIAlertView* _debugOptionsAlertView;
	UIViewController* _viewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showCreativeInformationAlertView;
-(void)debugOptionsAlertViewClickedButtonAtIndex:(long long)arg1 ;
-(void)creativeInfoAlertViewClickedButtonAtIndex:(long long)arg1 ;
-(void)showInAppPreview;
-(void)showWithAdDebugDialogString:(id)arg1 rootViewController:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
