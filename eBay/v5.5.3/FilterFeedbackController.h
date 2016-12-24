/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class ViewFeedbackController, UITableView, NSString;

@interface FilterFeedbackController : EUIViewController <UITableViewDelegate, UITableViewDataSource> {

	ViewFeedbackController* delegate;
	UITableView* feedbackTable;
	long long feedbackType;
	long long feedbackCommentType;

}

@property (assign,nonatomic,__weak) ViewFeedbackController * delegate; 
@property (nonatomic,retain) UITableView * feedbackTable; 
@property (assign,nonatomic) long long feedbackType; 
@property (assign,nonatomic) long long feedbackCommentType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedbackCommentType:(long long)arg1 ;
-(long long)feedbackCommentType;
-(UITableView *)feedbackTable;
-(void)setFeedbackTable:(UITableView *)arg1 ;
-(void)setDelegate:(ViewFeedbackController *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(ViewFeedbackController *)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(long long)feedbackType;
-(void)setFeedbackType:(long long)arg1 ;
@end
