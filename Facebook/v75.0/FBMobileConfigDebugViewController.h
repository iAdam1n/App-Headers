/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Facebook/FBMobileConfigSearchResultControllerDelegate.h>
#import <Facebook/FBMobileConfigDebugQEViewControllerDelegate.h>
#import <Facebook/FBMobileConfigDebugParameterViewControllerDelegate.h>
#import <Facebook/FBMobileConfigAdvancedSettingsViewControllerDelegate.h>
#import <Facebook/FBMobileConfigQEUniverseViewControllerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, FBMobileConfigContextManager, NSString, FBMobileConfigSearchResultController, UISearchDisplayController, UISwitch;

@interface FBMobileConfigDebugViewController : UIViewController <UISearchDisplayDelegate, FBMobileConfigSearchResultControllerDelegate, FBMobileConfigDebugQEViewControllerDelegate, FBMobileConfigDebugParameterViewControllerDelegate, FBMobileConfigAdvancedSettingsViewControllerDelegate, FBMobileConfigQEUniverseViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	FBMobileConfigContextManager* _sessionContextManager;
	FBMobileConfigContextManager* _sessionlessContextManager;
	shared_ptr<mobileconfig::FBMobileConfigManager>* _sessionManager;
	shared_ptr<mobileconfig::FBMobileConfigManager>* _sessionlessManager;
	shared_ptr<mobileconfig::FBMobileConfigStorageManager>* _sessionStorageManager;
	shared_ptr<mobileconfig::FBMobileConfigStorageManager>* _sessionlessStorageManager;
	shared_ptr<mobileconfig::FBMobileConfigFileUtils>* _fileUtils;
	shared_ptr<mobileconfig::FBMobileConfigMetaMap>* _metaMap;
	NSString* _userFBID;
	NSString* _mobileConfigSharedContainerPath;
	shared_ptr<mobileconfig::FBMobileConfigOverridesTable>* _overrides;
	vector<mobileconfig::FBMobileConfigQEUniverseInfo, std::__1::allocator<mobileconfig::FBMobileConfigQEUniverseInfo> >* _qeUnivInfo;
	vector<mobileconfig::FBMobileConfigGKInfo, std::__1::allocator<mobileconfig::FBMobileConfigGKInfo> >* _gksInfo;
	map<std::__1::pair<std::__1::basic_string<char>, int>, std::__1::pair<FBMobileConfigAliasType, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<std::__1::basic_string<char>, int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<std::__1::basic_string<char>, int>, std::__1::pair<FBMobileConfigAliasType, std::__1::basic_string<char> > > > >* _paramAliasMap;
	map<std::__1::pair<std::__1::basic_string<char>, int>, std::__1::pair<int, int>, std::__1::less<std::__1::pair<std::__1::basic_string<char>, int> >, std::__1::allocator<std::__1::pair<const std::__1::pair<std::__1::basic_string<char>, int>, std::__1::pair<int, int> > > >* _qeMap;
	FBMobileConfigSearchResultController* _searchResultController;
	UISearchDisplayController* _searchViewDisplayController;
	UISwitch* _switchView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMobileConfigSessionFactory:(id)arg1 mobileConfigSessionlessFactory:(id)arg2 session:(id)arg3 mobileConfigSharedContainerPath:(id)arg4 ;
-(void)performShadowStressTest:(int)arg1 ;
-(void)selectQEOrUniverse:(config_meta_t)arg1 ;
-(void)_refreshQEInfo;
-(void)_SetUpSearchResultController;
-(void)mobileConfigEnabledChecked:(id)arg1 ;
-(void)triggerMobileConfigRefresh;
-(void)clearOverrides;
-(void)removeAllKillswitchFiles;
-(void)warnAboutRestartingMessenger;
-(id)_getConfigContextForMeta:(config_meta_t)arg1 ;
-(id)configureSettingsCell:(id)arg1 atPath:(id)arg2 ;
-(id)configureValueDisplayCell:(id)arg1 atPath:(id)arg2 ;
-(id)mobileConfigKillswitchPath;
-(void)overrideGroup:(const FBMobileConfigQEGroupInfo*)arg1 universe:(const FBMobileConfigQEUniverseInfo*)arg2 ;
-(void)removeOverrideForUniverse:(FBMobileConfigQEUniverseInfo*)arg1 ;
-(id)getParamName:(FBMobileConfigQEParamInfo*)arg1 ;
-(void)populateActualParamValuesWithGroup:(const FBMobileConfigQEGroupInfo*)arg1 actualParams:(vector<mobileconfig::FBMobileConfigQEParamInfo, std::__1::allocator<mobileconfig::FBMobileConfigQEParamInfo> >*)arg2 ;
-(void)selectExperiment:(const FBMobileConfigQEExperimentInfo*)arg1 universe:(FBMobileConfigQEUniverseInfo*)arg2 ;
-(void)performWithSearchResultItem:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
@end
