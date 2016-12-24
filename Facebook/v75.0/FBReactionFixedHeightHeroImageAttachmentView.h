/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBReactionFixedHeightHeroImageAttachmentView : UIView {

	UIView* _highlightableView;
	UIView* _footerContentView;
	UIView* _bleedView;
	UIView* _cardImageView;
	UIView* _headerView;
	UIView* _heroImageView;
	UIView* _footerView;

}

@property (nonatomic,readonly) UIView * headerView;                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * heroImageView;              //@synthesize heroImageView=_heroImageView - In the implementation block
@property (nonatomic,readonly) UIView * footerView;                 //@synthesize footerView=_footerView - In the implementation block
-(id)initWithSession:(id)arg1 config:(id)arg2 ;
-(UIView *)heroImageView;
-(double)_coverPhotoHeightFromWidth:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(UIView *)footerView;
@end
