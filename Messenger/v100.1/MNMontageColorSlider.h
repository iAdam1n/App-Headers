/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageColorSliderDelegate;
@class UISlider, UIImage, UIImageView, UIColor;

@interface MNMontageColorSlider : UIView {

	UISlider* _slider;
	UIImage* _sliderImage;
	UIImageView* _imageView;
	UIEdgeInsets _colorToValueTable[30];
	id<MNMontageColorSliderDelegate> _delegate;
	UIColor* _currentColor;

}

@property (assign,nonatomic,__weak) id<MNMontageColorSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * currentColor;                                        //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) float value; 
-(void)_initColorToValueTable;
-(void)_colorChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNMontageColorSliderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMontageColorSliderDelegate>)delegate;
-(float)value;
-(void)setValue:(float)arg1 ;
-(UIColor *)currentColor;
-(void)setCurrentColor:(UIColor *)arg1 ;
@end
