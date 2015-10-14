/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:35 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/FBSDKContainerViewControllerDelegate.h>

@protocol FBSDKURLOpening;
@class FBSDKBridgeAPIRequest, UIViewController, NSString;

@interface FBSDKApplicationDelegate : NSObject <FBSDKContainerViewControllerDelegate> {

	FBSDKBridgeAPIRequest* _pendingRequest;
	/*^block*/id _pendingRequestCompletionBlock;
	id<FBSDKURLOpening> _pendingURLOpen;
	BOOL _expectingBackground;
	UIViewController* _safariViewController;
	BOOL _active;

}

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
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(id)_init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
@end

