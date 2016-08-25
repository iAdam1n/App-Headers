/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UITableViewCell, UITextView, NSString;

@interface BuyerMessageViewController : EUIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UITableViewCell* _messageCell;
	UITextView* _messageLabel;

}

@property (nonatomic,retain) UITableView * tableView;                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UITableViewCell * messageCell;              //@synthesize messageCell=_messageCell - In the implementation block
@property (nonatomic,retain) UITextView * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * messageText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableViewCell *)messageCell;
-(void)setMessageCell:(UITableViewCell *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITextView *)messageLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)setMessageLabel:(UITextView *)arg1 ;
@end

