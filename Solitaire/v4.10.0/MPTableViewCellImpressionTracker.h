/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
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
-(BOOL)isMajorityOfCellAtIndexPathVisible:(id)arg1 ;
-(id)initWithTableView:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<MPTableViewCellImpressionTrackerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPTableViewCellImpressionTrackerDelegate>)delegate;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)stopTracking;
-(void)tick:(id)arg1 ;
-(void)startTracking;
@end
