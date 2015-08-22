/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNAutolayoutTableViewCell.h>

@protocol T1ActivityAutolayoutTableViewCellDelegate;
@class TFNTwitterActivityItem, UIView, T1ActivityAutolayoutTableViewCellContentView;

@interface T1ActivityAutolayoutTableViewCell : TFNAutolayoutTableViewCell {

	TFNTwitterActivityItem* _activity;
	id<T1ActivityAutolayoutTableViewCellDelegate> _delegate;
	UIView* _activityContentView;
	T1ActivityAutolayoutTableViewCellContentView* _contentViewWithViewAll;
	T1ActivityAutolayoutTableViewCellContentView* _contentViewWithoutViewAll;
	T1ActivityAutolayoutTableViewCellContentView* _contentViewHeaderOnly;
	T1ActivityAutolayoutTableViewCellContentView* _currentContentView;

}

@property (nonatomic,retain) TFNTwitterActivityItem * activity;                                                     //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic,__weak) id<T1ActivityAutolayoutTableViewCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * activityContentView;                                                          //@synthesize activityContentView=_activityContentView - In the implementation block
@property (nonatomic,readonly) double leftMargin; 
@property (nonatomic,readonly) double rightMargin; 
@property (nonatomic,retain) T1ActivityAutolayoutTableViewCellContentView * contentViewWithViewAll;                 //@synthesize contentViewWithViewAll=_contentViewWithViewAll - In the implementation block
@property (nonatomic,retain) T1ActivityAutolayoutTableViewCellContentView * contentViewWithoutViewAll;              //@synthesize contentViewWithoutViewAll=_contentViewWithoutViewAll - In the implementation block
@property (nonatomic,retain) T1ActivityAutolayoutTableViewCellContentView * contentViewHeaderOnly;                  //@synthesize contentViewHeaderOnly=_contentViewHeaderOnly - In the implementation block
@property (nonatomic,retain) T1ActivityAutolayoutTableViewCellContentView * currentContentView;                     //@synthesize currentContentView=_currentContentView - In the implementation block
-(void)setExplicitLayoutMetrics:(id)arg1 ;
-(void)setActivityContentView:(UIView *)arg1 ;
-(T1ActivityAutolayoutTableViewCellContentView *)currentContentView;
-(UIView *)activityContentView;
-(T1ActivityAutolayoutTableViewCellContentView *)contentViewWithViewAll;
-(void)configureInternalContentView;
-(void)setCurrentContentView:(T1ActivityAutolayoutTableViewCellContentView *)arg1 ;
-(T1ActivityAutolayoutTableViewCellContentView *)contentViewWithoutViewAll;
-(T1ActivityAutolayoutTableViewCellContentView *)contentViewHeaderOnly;
-(void)setContentViewWithViewAll:(T1ActivityAutolayoutTableViewCellContentView *)arg1 ;
-(void)setContentViewWithoutViewAll:(T1ActivityAutolayoutTableViewCellContentView *)arg1 ;
-(void)setContentViewHeaderOnly:(T1ActivityAutolayoutTableViewCellContentView *)arg1 ;
-(void)setDelegate:(id<T1ActivityAutolayoutTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<T1ActivityAutolayoutTableViewCellDelegate>)delegate;
-(double)rightMargin;
-(TFNTwitterActivityItem *)activity;
-(void)setActivity:(TFNTwitterActivityItem *)arg1 ;
-(double)leftMargin;
@end
