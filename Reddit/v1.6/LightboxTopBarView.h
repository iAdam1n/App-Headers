/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>

@class BaseView, BaseButton;

@interface LightboxTopBarView : BaseView {

	BaseView* _dimmerView;
	BaseButton* _saveButton;
	BaseButton* _closeButton;

}

@property (nonatomic,retain) BaseView * dimmerView;                 //@synthesize dimmerView=_dimmerView - In the implementation block
@property (nonatomic,retain) BaseButton * saveButton;               //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) BaseButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
-(BaseView *)dimmerView;
-(void)setDimmerView:(BaseView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BaseButton *)closeButton;
-(void)setCloseButton:(BaseButton *)arg1 ;
-(BaseButton *)saveButton;
-(void)setSaveButton:(BaseButton *)arg1 ;
@end
