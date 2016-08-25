/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKContainerViewControllerDelegate.h>

@protocol FBSDKURLOpening;
@class FBSDKBridgeAPIRequest, UIViewController, NSString;

@interface FBSDKApplicationDelegate : NSObject <FBSDKContainerViewControllerDelegate> {

	FBSDKBridgeAPIRequest* _pendingRequest;
	/*^block*/id _pendingRequestCompletionBlock;
	id<FBSDKURLOpening> _pendingURLOpen;
	/*^block*/id _organicDeeplinkHandler;
	BOOL _expectingBackground;
	UIViewController* _safariViewController;
	BOOL _active;

}

@property (nonatomic,copy) id organicDeeplinkHandler;                    //@synthesize organicDeeplinkHandler=_organicDeeplinkHandler - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeWithLaunchData:(id)arg1 ;
+(id)sharedInstance;
+(void)load;
-(BOOL)_handleBridgeAPIResponseURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)_logIfAppLinkEvent:(id)arg1 ;
-(void)_cancelBridgeRequest;
-(void)openURLWithSafariViewController:(id)arg1 sender:(id)arg2 fromViewController:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)openURL:(id)arg1 sender:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)viewControllerDidDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)openBridgeAPIRequest:(id)arg1 useSafariViewController:(BOOL)arg2 fromViewController:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)organicDeeplinkHandler;
-(void)setOrganicDeeplinkHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(id)_init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
@end

