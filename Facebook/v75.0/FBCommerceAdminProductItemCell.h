/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBWebPhotoView, UILabel, UIView, UIImageView;

@interface FBCommerceAdminProductItemCell : UICollectionViewCell {

	FBWebPhotoView* _photoView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _supplementaryViewBackground;
	UIImageView* _supplementaryImageView;

}
+(double)_heightOfLabelsForContentSize:(CGSize)arg1 hasTitleText:(BOOL)arg2 hasSubtitleText:(BOOL)arg3 ;
+(CGSize)sizeThatFitsContentViewSize:(CGSize)arg1 ;
-(void)_setSupplementaryViewForProduct:(id)arg1 ;
-(void)configureWithSession:(id)arg1 productItem:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
