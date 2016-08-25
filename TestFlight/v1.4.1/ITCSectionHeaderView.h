/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/ITCPinnableHeaderView.h>

@class UILabel, UIButton, NSArray, NSString;

@interface ITCSectionHeaderView : ITCPinnableHeaderView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	UIButton* _actionButton;
	NSArray* _constraints;

}

@property (nonatomic,copy) NSString * leftText; 
@property (nonatomic,copy) NSString * rightText; 
@property (nonatomic,retain) UILabel * leftLabel;                  //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightLabel;                 //@synthesize rightLabel=_rightLabel - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                //@synthesize constraints=_constraints - In the implementation block
-(void)setRightLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)constraints;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setNeedsUpdateConstraints;
-(NSString *)leftText;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(UILabel *)leftLabel;
-(UILabel *)rightLabel;
-(UIButton *)actionButton;
-(UIEdgeInsets)defaultPadding;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setLeftLabel:(UILabel *)arg1 ;
@end

