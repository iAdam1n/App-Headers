/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface FBReactionSinglePlaceDetailsView : UIView {

	UILabel* _ratingLabel;
	UIImageView* _overallStarRatingBackgroundImageView;
	UILabel* _priceLabel;

}
-(id)initWithFrame:(CGRect)arg1 priceRange:(id)arg2 placeOpenStatus:(id)arg3 starRating:(id)arg4 ;
-(id)_priceRangeDescriptionForPriceRange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 priceRangeDescription:(id)arg2 placeOpenStatus:(id)arg3 starRating:(id)arg4 ;
-(void)addToAttributedString:(id)arg1 addString:(id)arg2 color:(id)arg3 font:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
