/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, RemindersDataManager, NSString;

@interface CouponsViewController : EUIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* tableView;
	RemindersDataManager* remindersDataSvc;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,retain) RemindersDataManager * remindersDataSvc; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemindersDataSvc:(RemindersDataManager *)arg1 ;
-(void)notificationsLoaded;
-(void)remindersLoaded;
-(RemindersDataManager *)remindersDataSvc;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
