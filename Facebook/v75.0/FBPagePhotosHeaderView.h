/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton, FBStreamListView;

@interface FBPagePhotosHeaderView : UIView {

	UILabel* _titleLabel;
	UILabel* _errorLabel;
	UIButton* _auxButton;
	UIButton* _errorButton;
	double _barHeight;
	FBStreamListView* _reactionUnitsView;

}

@property (nonatomic,retain) FBStreamListView * reactionUnitsView;              //@synthesize reactionUnitsView=_reactionUnitsView - In the implementation block
-(void)_setupAndCreateSubviews;
-(void)_configureTitle:(id)arg1 breadcrumbTitle:(id)arg2 breadcrumbTarget:(id)arg3 breadcrumbAction:(SEL)arg4 ;
-(void)_configureAuxButtonWithTitle:(id)arg1 auxButtonTarget:(id)arg2 auxButtonAction:(SEL)arg3 ;
-(id)initWithTitle:(id)arg1 breadcrumbTitle:(id)arg2 breadcrumbTarget:(id)arg3 breadcrumbAction:(SEL)arg4 auxButtonTitle:(id)arg5 auxButtonTarget:(id)arg6 auxButtonAction:(SEL)arg7 ;
-(void)configureErrorStateWithHeight:(double)arg1 errorTitle:(id)arg2 errorButtonTitle:(id)arg3 errorButtonTarget:(id)arg4 errorButtonAction:(SEL)arg5 ;
-(void)setReactionUnitsView:(FBStreamListView *)arg1 ;
-(void)updateReactionUnitsViewHeight:(double)arg1 ;
-(FBStreamListView *)reactionUnitsView;
-(void)layoutSubviews;
@end
