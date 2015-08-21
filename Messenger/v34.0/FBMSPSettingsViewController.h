/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBMNetworkProtocolChangeListener;
@class UITableView, UISwitch, FBMSPDataStore, FBUserSession, FBMNetworkProtocolController, FBMNetworkMonitorController, FBMobileConfigFactory, NSString;

@interface FBMSPSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	UISwitch* _syncProtocolSwitch;
	FBMSPDataStore* _dataStore;
	FBUserSession* _session;
	FBMNetworkProtocolController* _networkProtocolController;
	FBMNetworkMonitorController* _networkMonitorController;
	FBMobileConfigFactory* _mobileConfigFactory;
	id<FBMNetworkProtocolChangeListener> _networkProtocolChangeListenerDispatcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkProtocolDidChange:(unsigned long long)arg1 ;
-(void)_updateSyncProtocolSwitchStatus;
-(void)_syncProtocolChanged:(id)arg1 ;
-(void)_networkMonitorChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_version;
@end

