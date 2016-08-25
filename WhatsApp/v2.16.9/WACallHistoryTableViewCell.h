/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UITableViewCell.h>

@class WAAggregateCallEvent, NSLayoutConstraint, UIImageView, UILabel;

@interface WACallHistoryTableViewCell : UITableViewCell {

	WAAggregateCallEvent* _aggregateCallEvent;
	NSLayoutConstraint* _dateLabelRightEdgeConstraint;
	unsigned long long _lastCellState;
	UIImageView* _outgoingCallIconView;
	UILabel* _dateLabel;
	UILabel* _eventCountLabel;
	UILabel* _displayNameLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,readonly) UIImageView * outgoingCallIconView;              //@synthesize outgoingCallIconView=_outgoingCallIconView - In the implementation block
@property (nonatomic,readonly) UILabel * dateLabel;                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * eventCountLabel;                       //@synthesize eventCountLabel=_eventCountLabel - In the implementation block
@property (nonatomic,retain) UILabel * displayNameLabel;                        //@synthesize displayNameLabel=_displayNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                             //@synthesize detailLabel=_detailLabel - In the implementation block
+(UIEdgeInsets)preferredSeparatorInset;
+(double)preferredRowHeight;
+(void)initialize;
-(UIImageView *)outgoingCallIconView;
-(void)setDisplayNameLabel:(UILabel *)arg1 ;
-(UILabel *)displayNameLabel;
-(UILabel *)eventCountLabel;
-(void)applyFonts;
-(id)infoIconImageView;
-(void)configureWithAggregateCallEvent:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(UILabel *)dateLabel;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
@end

