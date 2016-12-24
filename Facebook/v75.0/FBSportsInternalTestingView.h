/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBSportsInternalTestingViewDelegate;
@class UITextField, UIButton, UIDatePicker, UITableView;

@interface FBSportsInternalTestingView : UIView {

	UITextField* _input;
	UIButton* _inputButton;
	UIDatePicker* _datePicker;
	UIButton* _marchMadnessButton;
	UIButton* _olympicsButton;
	id<FBSportsInternalTestingViewDelegate> _delegate;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<FBSportsInternalTestingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
-(id)_exampleButtonWithTitle:(id)arg1 ;
-(void)_datePickerDidUpdate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBSportsInternalTestingViewDelegate>)arg1 ;
-(id<FBSportsInternalTestingViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)_buttonTapped:(id)arg1 ;
@end
