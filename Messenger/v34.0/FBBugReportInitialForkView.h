/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UILabel, UITableView, UISwitch, UIButton;

@interface FBBugReportInitialForkView : UIView {

	UIView* _rectangleWithRoundedCornerView;
	UIView* _overlay;
	UILabel* _title;
	UIView* _cancelButtonBackground;
	int _desiredTinesTableViewHeight;
	UITableView* _tinesTableView;
	UISwitch* _shakeToReportSwitch;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UITableView * tinesTableView;                //@synthesize tinesTableView=_tinesTableView - In the implementation block
@property (nonatomic,retain) UISwitch * shakeToReportSwitch;              //@synthesize shakeToReportSwitch=_shakeToReportSwitch - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) int desiredTinesTableViewHeight;                       //@synthesize desiredTinesTableViewHeight=_desiredTinesTableViewHeight - In the implementation block
-(int)desiredTinesTableViewHeight;
-(UITableView *)tinesTableView;
-(void)setTinesTableView:(UITableView *)arg1 ;
-(void)showCancelButtonPressedState;
-(void)showCancelButtonUnpressedState;
-(id)colorForComponent:(int)arg1 ;
-(id)initWithShakeToReportSetting:(BOOL)arg1 ;
-(UISwitch *)shakeToReportSwitch;
-(void)setShakeToReportSwitch:(UISwitch *)arg1 ;
-(void)setDesiredTinesTableViewHeight:(int)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)animateIn;
@end
