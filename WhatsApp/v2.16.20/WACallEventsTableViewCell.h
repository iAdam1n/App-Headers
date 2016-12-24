/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, NSMutableArray, UILabel;

@interface WACallEventsTableViewCell : UITableViewCell {

	UIView* _topEdge;
	NSMutableArray* _customConstraints;
	UILabel* _dateLabel;
	NSMutableArray* _timeLabels;
	NSMutableArray* _eventLabels;
	NSMutableArray* _durationLabels;

}
-(void)configureWithAggregateCallEvent:(id)arg1 ;
-(void)addCustomConstraints:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
@end
