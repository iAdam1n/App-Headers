/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStoryStreamViewControllerDelegate.h>
#import <Facebook/FBFlexibleSplitViewControllerDelegate.h>
#import <Facebook/FBNewsFeedViewControllerDelegate.h>
#import <Facebook/FBAuxiliaryViewCoordinator.h>

@protocol FBNavigationController_DEPRECATED;
@class FBUserSession, FBAppModuleManager, FBCustomNavigationController, FBProviderMapData, NSMutableDictionary, UIViewController, FBFlexibleSplitViewController, NSString;

@interface FBAuxiliarySplitViewCoordinator : NSObject <FBStoryStreamViewControllerDelegate, FBFlexibleSplitViewControllerDelegate, FBNewsFeedViewControllerDelegate, FBAuxiliaryViewCoordinator> {

	FBUserSession* _session;
	FBAppModuleManager* _moduleManager;
	FBCustomNavigationController*<FBNavigationController_DEPRECATED> _navigationController;
	FBProviderMapData* _providerMapData;
	NSMutableDictionary* _rightViewControllers;
	UIViewController* _blankViewController;
	BOOL _alwaysExpand;
	FBFlexibleSplitViewController* _auxiliarySplitViewController;

}

@property (nonatomic,readonly) FBFlexibleSplitViewController * auxiliarySplitViewController;              //@synthesize auxiliarySplitViewController=_auxiliarySplitViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_fixedControllerWidth;
-(void)_updateForVisibleViewController:(id)arg1 reloadRightViewController:(BOOL)arg2 ;
-(BOOL)_shouldShowAuxiliaryViewForViewController:(id)arg1 ;
-(void)_didChangeSize;
-(void)storyStreamViewControllerDidTriggerRefresh:(id)arg1 ;
-(void)flexibleSplitViewControllerDidResize:(id)arg1 ;
-(void)updateForVisibleViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 moduleManager:(id)arg2 navigationController:(id)arg3 providerMapData:(id)arg4 alwaysExpand:(BOOL)arg5 ;
-(FBFlexibleSplitViewController *)auxiliarySplitViewController;
@end
