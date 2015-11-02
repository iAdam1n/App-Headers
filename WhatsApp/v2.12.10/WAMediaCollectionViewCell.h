/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView, WAMediaPickerVideoAssetOverlayView;

@interface WAMediaCollectionViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _checkmarkBackgroundView;
	UIImageView* _checkmarkImageView;
	UIView* _dimmingView;
	WAMediaPickerVideoAssetOverlayView* _durationOverlay;
	unsigned long long _cellState;

}

@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned long long cellState;              //@synthesize cellState=_cellState - In the implementation block
-(void)setMediaDuration:(int)arg1 mediaIconType:(unsigned long long)arg2 ;
-(void)cancelThumbnailLoading;
-(BOOL)isParticipatingInInteractiveTransition;
-(id)baseAccessibilityValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(void)setCellState:(unsigned long long)arg1 ;
-(unsigned long long)cellState;
@end
