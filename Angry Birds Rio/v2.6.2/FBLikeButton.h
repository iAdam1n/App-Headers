/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton {

	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;

}
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(double)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(double)arg1 ;
-(void)_initializeContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

