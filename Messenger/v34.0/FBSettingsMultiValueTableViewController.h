/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBSettingsViewControllerDelegate;
@class FBSettingsSchemaItemMultiValue, NSString;

@interface FBSettingsMultiValueTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	id<FBSettingsViewControllerDelegate> _delegate;
	FBSettingsSchemaItemMultiValue* _schemaItem;

}

@property (assign,nonatomic) id<FBSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBSettingsSchemaItemMultiValue * schemaItem;                //@synthesize schemaItem=_schemaItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showAuxiliaryViewController;
-(void)setSchemaItem:(FBSettingsSchemaItemMultiValue *)arg1 ;
-(id)initWithTitle:(id)arg1 data:(id)arg2 ;
-(FBSettingsSchemaItemMultiValue *)schemaItem;
-(void)setDelegate:(id<FBSettingsViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBSettingsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithStyle:(long long)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
@end

