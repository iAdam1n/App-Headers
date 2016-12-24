/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <WhatsApp/SinglePersonPickerDelegate.h>

@class NSMutableArray, UITableViewCell, NSString;

@interface WABlacklistViewController : WATableViewController <SinglePersonPickerDelegate> {

	NSMutableArray* _blockedContacts;
	UITableViewCell* _addNewCell;
	BOOL _ignoreBlockedContactListNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controller;
-(void)wa_fontSizeDidChange;
-(void)xmppConnectionStateDidChange:(id)arg1 ;
-(void)wa_tintColorDidChange;
-(id)excludedJIDsForSinglePersonPicker:(id)arg1 ;
-(void)singlePersonPickerDidCancel:(id)arg1 ;
-(void)singlePersonPicker:(id)arg1 didSelectContactInfo:(id)arg2 ;
-(void)blockedContactsListUpdated:(id)arg1 ;
-(void)reloadBlacklistItems;
-(BOOL)canMakeChanges;
-(void)removeBlacklistItem:(id)arg1 ;
-(void)showUnableToMakeChangesError;
-(void)addPerson;
-(void)addBlacklistItem:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)updateInterface;
@end
