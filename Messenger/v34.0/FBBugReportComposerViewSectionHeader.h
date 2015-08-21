/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface FBBugReportComposerViewSectionHeader : UIView {

	UILabel* _summary;
	BOOL _showRequired;
	BOOL _sectionIsSelected;
	BOOL _showBorder;
	BOOL _doneButtonCanBeDisplayed;
	UIButton* _button;
	UILabel* _title;
	UIButton* _doneButton;

}

@property (nonatomic,readonly) UIButton * button;                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) UILabel * title;                    //@synthesize title=_title - In the implementation block
@property (assign) BOOL showBorder;                                //@synthesize showBorder=_showBorder - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;              //@synthesize doneButton=_doneButton - In the implementation block
@property (assign) BOOL doneButtonCanBeDisplayed;                  //@synthesize doneButtonCanBeDisplayed=_doneButtonCanBeDisplayed - In the implementation block
-(id)initWithTitle:(id)arg1 showRequired:(BOOL)arg2 ;
-(void)setDoneButtonCanBeDisplayed:(BOOL)arg1 ;
-(void)setSectionIsSelected:(BOOL)arg1 ;
-(void)setSummaryAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setSummaryText:(id)arg1 ;
-(BOOL)showBorder;
-(BOOL)doneButtonCanBeDisplayed;
-(UIButton *)button;
-(void)layoutSubviews;
-(UILabel *)title;
-(UIButton *)doneButton;
-(void)setShowBorder:(BOOL)arg1 ;
@end

