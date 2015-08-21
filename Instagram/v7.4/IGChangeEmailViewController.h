/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGChangeEmailViewControllerDelegate;
@class IGTextField, NSString;

@interface IGChangeEmailViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	id<IGChangeEmailViewControllerDelegate> _delegate;
	IGTextField* _changeEmailField;
	NSString* _email;
	long long _source;

}

@property (assign,nonatomic,__weak) id<IGChangeEmailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTextField * changeEmailField;                                       //@synthesize changeEmailField=_changeEmailField - In the implementation block
@property (nonatomic,copy) NSString * email;                                                       //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) long long source;                                                     //@synthesize source=_source - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersTabBarHidden;
-(IGTextField *)changeEmailField;
-(id)initWithEmail:(id)arg1 fromSource:(long long)arg2 ;
-(void)setChangeEmailField:(IGTextField *)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGChangeEmailViewControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGChangeEmailViewControllerDelegate>)delegate;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(long long)source;
-(void)setSource:(long long)arg1 ;
-(BOOL)showsCancelButton;
-(NSString *)email;
-(void)cancelButtonTapped;
-(void)doneButtonTapped;
@end

