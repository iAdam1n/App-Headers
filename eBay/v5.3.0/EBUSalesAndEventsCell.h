/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUStartScreenCell.h>

@class EUIImageView, EBUEventTimerContainerView, EUILabel, UIView, NSMutableArray;

@interface EBUSalesAndEventsCell : EBUStartScreenCell {

	BOOL _showDivider;
	EUIImageView* _imageView;
	EBUEventTimerContainerView* _timerContainer;
	EUILabel* _titleLabel;
	EUILabel* _subTitleLabel;
	UIView* _dividerView;
	NSMutableArray* _customConstraints;

}

@property (nonatomic,retain) NSMutableArray * customConstraints;                              //@synthesize customConstraints=_customConstraints - In the implementation block
@property (assign,nonatomic) BOOL showDivider;                                                //@synthesize showDivider=_showDivider - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * imageView;                                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) EBUEventTimerContainerView * timerContainer;              //@synthesize timerContainer=_timerContainer - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * subTitleLabel;                                 //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * dividerView;                                     //@synthesize dividerView=_dividerView - In the implementation block
-(EUILabel *)subTitleLabel;
-(NSMutableArray *)customConstraints;
-(void)setCustomConstraints:(NSMutableArray *)arg1 ;
-(void)setSubTitleLabel:(EUILabel *)arg1 ;
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)dividerView;
-(EBUEventTimerContainerView *)timerContainer;
-(void)setTimerContainer:(EBUEventTimerContainerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(EUILabel *)titleLabel;
-(void)prepareForReuse;
-(void)updateConstraints;
-(EUIImageView *)imageView;
-(BOOL)showDivider;
-(void)setShowDivider:(BOOL)arg1 ;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(void)setImageView:(EUIImageView *)arg1 ;
-(void)updateTimeLeft;
@end

