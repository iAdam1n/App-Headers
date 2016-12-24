/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITableViewController.h>
#import <eBay/EUIInspectorOverlayController.h>

@class NSArray, EUIToolbarView, NSString;

@interface EBUDebugAppNavigatorViewController : EUITableViewController <EUIInspectorOverlayController> {

	NSArray* _navigationDestinations;
	EUIToolbarView* _toolbar;

}

@property (nonatomic,retain) NSArray * navigationDestinations;              //@synthesize navigationDestinations=_navigationDestinations - In the implementation block
@property (nonatomic,retain) EUIToolbarView * toolbar;                      //@synthesize toolbar=_toolbar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonAction:(id)arg1 ;
-(NSArray *)navigationDestinations;
-(void)setNavigationDestinations:(NSArray *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)viewDidLoad;
-(EUIToolbarView *)toolbar;
-(id)initWithStyle:(long long)arg1 ;
-(void)setToolbar:(EUIToolbarView *)arg1 ;
@end
