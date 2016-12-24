/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentTableViewDataSourceSectionHeaderHandler.h>
#import <Facebook/FBComponentTableViewDataSourceSelectionHandler.h>
#import <Facebook/FBComponentTableViewDataSourceEditingHandler.h>
#import <Facebook/FBReachabilityListener.h>

@class FBUserSession, FBComponentTableViewDataSource, FBAppInviteBlockSettingsStore, NSString;

@interface FBAppInviteBlockSettingsViewController : FBTableViewController <CKComponentProvider, FBComponentTableViewDataSourceSectionHeaderHandler, FBComponentTableViewDataSourceSelectionHandler, FBComponentTableViewDataSourceEditingHandler, FBReachabilityListener> {

	FBUserSession* _session;
	FBComponentTableViewDataSource* _tableViewDataSource;
	FBAppInviteBlockSettingsStore* _store;
	unsigned long long _reachabilityState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(id)dataSource:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)dataSource:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)dataSource:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)_handleNetworkError;
-(id)_removeModelFromStore:(id)arg1 ;
-(void)_tryNetworkRequest;
-(BOOL)_hasAnyData;
-(void)_updateFromStore;
-(void)_updateItems:(Items*)arg1 withModels:(id)arg2 inSection:(unsigned long long)arg3 ;
-(BOOL)dataSource:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dataSource:(id)arg1 commitEditingStyle:(long long)arg2 forRowWithModel:(id)arg3 ;
-(long long)dataSource:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)dataSource:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)initWithSession:(id)arg1 ;
@end
