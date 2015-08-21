/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBPlatformDebugOpenURLViewControllerDelegate.h>

@protocol FBPlatformDebugActionHandling;
@class NSArray, NSString;

@interface FBPlatformDebugViewController : UITableViewController <FBPlatformDebugOpenURLViewControllerDelegate> {

	NSArray* _configuration;
	NSString* _appBridgeURLScheme;
	id<FBPlatformDebugActionHandling> _debugActionHandler;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * appBridgeURLScheme;                              //@synthesize appBridgeURLScheme=_appBridgeURLScheme - In the implementation block
@property (nonatomic,retain) id<FBPlatformDebugActionHandling> debugActionHandler;              //@synthesize debugActionHandler=_debugActionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                                         //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)fb_showNavBarSearchField;
-(void)platformDebugOpenURLViewControllerDidFinish:(id)arg1 ;
-(void)_debugSharingLink;
-(void)_debugSharingPhotos;
-(void)_debugSharingVideo;
-(void)_debugSharingOpenGraph;
-(void)_debugAppRequests;
-(void)_debugAppInvites;
-(void)_debugOGLike;
-(void)_debugPageLike;
-(void)_debugWebViewInstallFbrpcAL;
-(void)_debugWebViewOpenFbrpcAL;
-(void)_debugWebViewInstallFbrpcDL;
-(void)_debugWebViewOpenFbrpcDL;
-(id)_itemForIndexPath:(id)arg1 ;
-(id)_groupForSection:(long long)arg1 ;
-(id<FBPlatformDebugActionHandling>)debugActionHandler;
-(NSString *)appBridgeURLScheme;
-(id)_squareTestImage:(int)arg1 ;
-(id)initWithAppBridgeURLScheme:(id)arg1 version:(id)arg2 ;
-(void)setDebugActionHandler:(id<FBPlatformDebugActionHandling>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(NSString *)version;
@end

