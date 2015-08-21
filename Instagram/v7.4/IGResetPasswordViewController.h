/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@class IGTableViewInsetInfoView, IGTextField, IGUser, NSString;

@interface IGResetPasswordViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	IGTableViewInsetInfoView* _footerView;
	IGTextField* _passwordField;
	IGTextField* _repeatPasswordField;
	IGUser* _user;
	NSString* _token;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToken:(id)arg1 user:(id)arg2 ;
-(void)userUpdated:(id)arg1 ;
-(void)signIn;
-(BOOL)validateLengthAllowZeroLength:(BOOL)arg1 ;
-(BOOL)validateMatching;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setUser:(id)arg1 ;
@end

