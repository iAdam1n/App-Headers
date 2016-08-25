/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPTableViewCellImpressionTrackerDelegate;
@class UITableView, NSTimer;

@interface MPTableViewCellImpressionTracker : NSObject {

	UITableView* _tableView;
	id<MPTableViewCellImpressionTrackerDelegate> _delegate;
	NSTimer* _timer;

}

@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<MPTableViewCellImpressionTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                           //@synthesize timer=_timer - In the implementation block
-(void)startTracking;
-(BOOL)isMajorityOfCellAtIndexPathVisible:(id)arg1 ;
-(id)initWithTableView:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<MPTableViewCellImpressionTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPTableViewCellImpressionTrackerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(void)stopTracking;
-(void)tick:(id)arg1 ;
@end

