/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@protocol _WASavedContentSearchResultsTableViewControllerConfigurationDelegate, UIViewControllerPreviewingDelegate;
@class NSArray;

@interface _WASavedContentSearchResultsTableViewController : WATableViewController {

	NSArray* _items;
	id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate> _configurationDelegate;
	id<UIViewControllerPreviewingDelegate> _previewingDelegate;

}

@property (nonatomic,copy) NSArray * items;                                                                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerPreviewingDelegate> previewingDelegate;                                                   //@synthesize previewingDelegate=_previewingDelegate - In the implementation block
-(void)setPreviewingDelegate:(id<UIViewControllerPreviewingDelegate>)arg1 ;
-(id<UIViewControllerPreviewingDelegate>)previewingDelegate;
-(void)applicationDidChangeStatusBarOrientation:(id)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setConfigurationDelegate:(id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate>)arg1 ;
-(id<_WASavedContentSearchResultsTableViewControllerConfigurationDelegate>)configurationDelegate;
@end
