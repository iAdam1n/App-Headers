/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGServiceHelperLoginProtocol;
@class UIBarButtonItem, IGTextField, NSString;

@interface IGServiceLoginTableViewController : IGGroupedTableViewController <UITextFieldDelegate> {

	UIBarButtonItem* _doneButtonItem;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	NSString* _serviceName;
	long long _serviceUsernameType;
	id<IGServiceHelperLoginProtocol> _serviceHelper;
	id _delegate;

}

@property (nonatomic,copy) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) long long serviceUsernameType;                                      //@synthesize serviceUsernameType=_serviceUsernameType - In the implementation block
@property (assign,nonatomic,__weak) id<IGServiceHelperLoginProtocol> serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onLoginSucceeded:(id)arg1 ;
-(void)onLoginFailed:(id)arg1 ;
-(void)doLogin;
-(void)configureLoginCell:(id)arg1 forRow:(long long)arg2 ;
-(BOOL)canLogin;
-(id)initWithStyle:(long long)arg1 serviceName:(id)arg2 serviceHelper:(id)arg3 ;
-(long long)serviceUsernameType;
-(void)setServiceUsernameType:(long long)arg1 ;
-(id<IGServiceHelperLoginProtocol>)serviceHelper;
-(void)setServiceHelper:(id<IGServiceHelperLoginProtocol>)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
@end
