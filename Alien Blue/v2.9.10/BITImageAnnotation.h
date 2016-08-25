/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface BITImageAnnotation : UIView {

	BOOL _selected;
	UIImage* _sourceImage;
	CGSize _movedDelta;
	CGRect _imageFrame;

}

@property (assign,nonatomic) CGSize movedDelta;                         //@synthesize movedDelta=_movedDelta - In the implementation block
@property (assign,nonatomic,__weak) UIImage * sourceImage;              //@synthesize sourceImage=_sourceImage - In the implementation block
@property (assign,nonatomic) CGRect imageFrame;                         //@synthesize imageFrame=_imageFrame - In the implementation block
-(CGSize)movedDelta;
-(BOOL)resizable;
-(void)setMovedDelta:(CGSize)arg1 ;
-(void)setImageFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)sourceImage;
-(void)setSourceImage:(UIImage *)arg1 ;
-(CGRect)imageFrame;
@end

