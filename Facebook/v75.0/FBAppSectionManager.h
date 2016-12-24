/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSelectedAppSectionProvider.h>
#import <Facebook/FBSelectedMenuItemTracking.h>

@protocol FBAppSectionManagerDelegate, FBMenuItem, FBAppSectionManagerAuxiliaryItemsDelegate;
@class FBAppModuleManager, FBAPISessionStore, FBExperimentManager, NSNotificationCenter, FBNavigationViewCoordinatorConfig, FBUserSession, NSOrderedSet, NSArray, NSMutableDictionary, FBJewelController, FBKVOController, NSString;

@interface FBAppSectionManager : NSObject <FBSelectedAppSectionProvider, FBSelectedMenuItemTracking> {

	FBAppModuleManager* _appModuleManager;
	FBAPISessionStore* _apiSessionStore;
	FBExperimentManager* _experimentManager;
	NSNotificationCenter* _notificationCenter;
	FBNavigationViewCoordinatorConfig* _config;
	FBUserSession* _session;
	NSOrderedSet* _enabledAppSections;
	NSArray* _appSectionMenuItems;
	NSMutableDictionary* _viewControllerCache;
	NSMutableDictionary* _viewControllerAges;
	NSArray* _auxiliaryItems;
	id<FBAppSectionManagerDelegate> _delegate;
	id<FBMenuItem> _selectedAppSection;
	id<FBMenuItem> _previouslySelectedAppSection;
	FBJewelController* _jewelController;
	id<FBAppSectionManagerAuxiliaryItemsDelegate> _auxiliaryItemsDelegate;
	FBKVOController* _KVOController;

}

@property (nonatomic,retain) FBKVOController * KVOController;                                                          //@synthesize KVOController=_KVOController - In the implementation block
@property (assign,nonatomic,__weak) id<FBAppSectionManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBMenuItem> selectedAppSection;                                                        //@synthesize selectedAppSection=_selectedAppSection - In the implementation block
@property (nonatomic,retain) id<FBMenuItem> previouslySelectedAppSection;                                              //@synthesize previouslySelectedAppSection=_previouslySelectedAppSection - In the implementation block
@property (nonatomic,readonly) id<FBMenuItem> defaultAppSection; 
@property (nonatomic,copy,readonly) NSArray * menuItems; 
@property (nonatomic,retain) FBJewelController * jewelController;                                                      //@synthesize jewelController=_jewelController - In the implementation block
@property (assign,nonatomic,__weak) id<FBAppSectionManagerAuxiliaryItemsDelegate> auxiliaryItemsDelegate;              //@synthesize auxiliaryItemsDelegate=_auxiliaryItemsDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * auxiliaryItems;                                                          //@synthesize auxiliaryItems=_auxiliaryItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setClearViewControllerCacheOnMemoryWarning;
-(id)menuItemForAppSectionWithBookmarkID:(id)arg1 ;
-(void)setSelectedAppSection:(id<FBMenuItem>)arg1 ;
-(id)appSectionIDs;
-(void)setJewelController:(FBJewelController *)arg1 ;
-(FBJewelController *)jewelController;
-(void)refreshAuxiliaryItems;
-(id<FBAppSectionManagerAuxiliaryItemsDelegate>)auxiliaryItemsDelegate;
-(void)_observeJewelController:(id)arg1 eligibleAppSections:(id)arg2 ;
-(void)_messagesJewelCountChanged;
-(void)_c2cMarketplaceJewelCountChanged;
-(void)_friendJewelCountChanged;
-(void)_videosJewelCountChanged;
-(void)_notificationJewelCountChanged;
-(void)_updateNotificationJewelBadgeSpeak:(BOOL)arg1 ;
-(void)_speakChangeForJewel:(id)arg1 forCount:(id)arg2 ;
-(id)newMenuItemForAppSection:(id)arg1 ;
-(id)appSectionMenuItems;
-(void)setPreviouslySelectedAppSection:(id<FBMenuItem>)arg1 ;
-(BOOL)_isAuxiliaryItem:(id)arg1 ;
-(void)setSelectedAppSection:(id)arg1 withAgeForPreviousAppSection:(id)arg2 ;
-(id)currentlySelectedAppSectionBookmarkID;
-(id<FBMenuItem>)selectedAppSection;
-(id)initWithAppModuleManager:(id)arg1 apiSessionStore:(id)arg2 experimentManager:(id)arg3 notificationCenter:(id)arg4 config:(id)arg5 session:(id)arg6 ;
-(void)setAuxiliaryItemsDelegate:(id<FBAppSectionManagerAuxiliaryItemsDelegate>)arg1 ;
-(void)setEnabledAppSections:(id)arg1 ;
-(BOOL)canChangeSelectedAppSectionToSection:(id)arg1 ;
-(id<FBMenuItem>)defaultAppSection;
-(id)preferredAppSectionAfterSuccessfulPublishing;
-(id)viewControllersForAppSection:(id)arg1 ;
-(void)setViewControllers:(id)arg1 forAppSection:(id)arg2 ;
-(double)ageOfViewControllersForAppSection:(id)arg1 ;
-(id<FBMenuItem>)previouslySelectedAppSection;
-(NSArray *)auxiliaryItems;
-(FBKVOController *)KVOController;
-(void)setKVOController:(FBKVOController *)arg1 ;
-(void)setDelegate:(id<FBAppSectionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBAppSectionManagerDelegate>)delegate;
-(NSArray *)menuItems;
@end
