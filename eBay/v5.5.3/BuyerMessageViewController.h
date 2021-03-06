/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
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
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(UITextView *)messageLabel;
-(void)setMessageLabel:(UITextView *)arg1 ;
@end

