/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SFSafariViewControllerDelegate.h>

@class UIWindow, UIViewController, NSString;

@interface FBSDKOrganicDeeplinkHelper : NSObject <SFSafariViewControllerDelegate> {

	UIWindow* _safariWindow;
	UIViewController* _safariViewController;
	/*^block*/id _handler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fetchOrganicDeeplink:(/*^block*/id)arg1 ;
-(id)constructDeeplinkRetrievalUrl;
-(void)presentSafariViewController;
-(void)cleanUpSafariViewController;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(BOOL)arg2 ;
@end

