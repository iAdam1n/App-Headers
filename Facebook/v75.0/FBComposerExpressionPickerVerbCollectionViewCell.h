/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UILabel, FBNetworkImageView;

@interface FBComposerExpressionPickerVerbCollectionViewCell : UICollectionViewCell {

	UIView* _animatableView;
	unsigned long long _borderOptions;
	UIView* _bottomBorder;
	double _cellWidth;
	UIImageView* _chevronImageView;
	UILabel* _nameLabel;
	UIView* _rightBorder;
	FBNetworkImageView* _thumbnailImageView;

}
+(id)fontForLabelGivenWidth:(double)arg1 ;
+(BOOL)canFitTwoCellsForWidth:(double)arg1 longestText:(id)arg2 ;
-(void)configureWithSession:(id)arg1 title:(id)arg2 imageURL:(id)arg3 borderOptions:(unsigned long long)arg4 ;
-(void)animatePressedDownState;
-(void)animateLiftedUpState;
-(void)_setTitleString:(id)arg1 ;
-(void)_setImageURL:(id)arg1 withSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
@end
