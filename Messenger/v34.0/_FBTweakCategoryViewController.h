/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MFMailComposeViewControllerDelegate.h>

@protocol _FBTweakCategoryViewControllerDelegate;
@class UITableView, UIToolbar, NSArray, FBTweakStore, NSString;

@interface _FBTweakCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, MFMailComposeViewControllerDelegate> {

	UITableView* _tableView;
	UIToolbar* _toolbar;
	NSArray* _sortedCategories;
	FBTweakStore* _store;
	id<_FBTweakCategoryViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBTweakStore * store;                                                  //@synthesize store=_store - In the implementation block
@property (assign,nonatomic,__weak) id<_FBTweakCategoryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_export;
-(id)initWithStore:(id)arg1 ;
-(FBTweakStore *)store;
-(void)dealloc;
-(void)setDelegate:(id<_FBTweakCategoryViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_FBTweakCategoryViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_reset;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)_done;
@end

