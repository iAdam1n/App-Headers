/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Gumtree/GPPACLScrollViewDelegate.h>
#import <Gumtree/GPPACLSearchViewDelegate.h>
#import <Gumtree/GPPStyledTextViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol GPPACLViewControllerDelegate, GPPACLPickerService;
@class GPPACLScrollView, GPPTableView, UIView, NSMutableArray, GPPACLSearchViewController, GPPStyledTextView, GPPACL, NSBundle, NSString;

@interface GPPACLViewController : UIViewController <GPPACLScrollViewDelegate, GPPACLSearchViewDelegate, GPPStyledTextViewDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	GPPACLScrollView* _aclScrollView;
	GPPTableView* _tableView;
	UIView* _separatorView;
	NSMutableArray* _tableViewModel;
	/*^block*/id _bieberHandler;
	GPPACLSearchViewController* _searchViewController;
	BOOL _didAddTableViewObserver;
	GPPStyledTextView* _textView;
	BOOL _enableDeviceContacts;
	BOOL _showCircleCount;
	int _mode;
	GPPACL* _acl;
	id<GPPACLViewControllerDelegate> _delegate;
	NSBundle* _resourceBundle;
	id<GPPACLPickerService> _service;
	UIView* _rootView;

}

@property (nonatomic,copy) GPPACL * acl;                                                    //@synthesize acl=_acl - In the implementation block
@property (assign,nonatomic,__weak) id<GPPACLViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * descriptionText; 
@property (assign,nonatomic) BOOL enableDeviceContacts;                                     //@synthesize enableDeviceContacts=_enableDeviceContacts - In the implementation block
@property (assign,nonatomic) int mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL showCircleCount;                                          //@synthesize showCircleCount=_showCircleCount - In the implementation block
@property (assign,nonatomic,__weak) NSBundle * resourceBundle;                              //@synthesize resourceBundle=_resourceBundle - In the implementation block
@property (assign,nonatomic,__weak) id<GPPACLPickerService> service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic,__weak) UIView * rootView;                                      //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,readonly) GPPTableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * tableViewModel; 
@property (nonatomic,readonly) GPPStyledTextView * textView;                                //@synthesize textView=_textView - In the implementation block
-(NSBundle *)resourceBundle;
-(void)gppInit;
-(void)setAcl:(GPPACL *)arg1 ;
-(GPPACL *)acl;
-(void)aclScrollView:(id)arg1 didChangeSearchQuery:(id)arg2 ;
-(void)aclScrollViewSearchDidStart:(id)arg1 ;
-(void)aclScrollViewSearchDidEnd:(id)arg1 ;
-(void)setEnableDeviceContacts:(BOOL)arg1 ;
-(void)logShareboxEvent:(id)arg1 ;
-(id)cellDataForIndexPath:(id)arg1 ;
-(void)searchViewController:(id)arg1 didSelectACLEntry:(id)arg2 ;
-(BOOL)enableDeviceContacts;
-(void)resetTableViewModel;
-(void)loadSubViews;
-(id)createTableViewModel;
-(void)setShowCircleCount:(BOOL)arg1 ;
-(id)createTableView;
-(void)tapCancelButton;
-(void)tapAcceptButton;
-(Class)cellClassForIndexPath:(id)arg1 ;
-(void)domainRestrictedSwitchToggled:(id)arg1 ;
-(NSMutableArray *)tableViewModel;
-(void)selectACLEntry:(id)arg1 selected:(BOOL)arg2 ;
-(void)showBieberWarningWithAcceptHandler:(/*^block*/id)arg1 ;
-(id)getPublicEntry;
-(id)indexPathForACLEntry:(id)arg1 ;
-(void)updatePublicCircleVisibility;
-(BOOL)shouldShowDomainRestrictedSwitch;
-(BOOL)showCircleCount;
-(void)styledTextView:(id)arg1 didSelectUrl:(id)arg2 ;
-(void)setResourceBundle:(NSBundle *)arg1 ;
-(id)searchViewController;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<GPPACLViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<GPPACLViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(GPPTableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(GPPStyledTextView *)textView;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(id<GPPACLPickerService>)service;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)resetSearch;
-(void)setService:(id<GPPACLPickerService>)arg1 ;
@end

