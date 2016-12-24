/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/ITCPinnableHeaderView.h>

@class UISegmentedControl, NSArray;

@interface ITCSegmentedHeaderView : ITCPinnableHeaderView {

	UISegmentedControl* _segmentedControl;
	NSArray* _segmentedControlConstraints;

}

@property (nonatomic,retain) UISegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) NSArray * segmentedControlConstraints;              //@synthesize segmentedControlConstraints=_segmentedControlConstraints - In the implementation block
-(id)constraintsForSegmentedControl;
-(NSArray *)segmentedControlConstraints;
-(void)setSegmentedControlConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsUpdateConstraints;
-(void)updateConstraints;
-(void)prepareForReuse;
-(UISegmentedControl *)segmentedControl;
-(UIEdgeInsets)defaultPadding;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
@end
