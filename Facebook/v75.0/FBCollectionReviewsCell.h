/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionAbstractCell.h>

@class FBNetworkImageView, FBStarRatingView, FBRichTextView, FBMemTimelineAppSection, FBMemTimelineAppCollectionItem;

@interface FBCollectionReviewsCell : FBCollectionAbstractCell {

	FBNetworkImageView* _icon;
	FBStarRatingView* _ratingView;
	FBRichTextView* _titleLabel;
	FBRichTextView* _subtitleLabel;
	FBMemTimelineAppSection* _collectionSection;
	FBMemTimelineAppCollectionItem* _collectionItem;

}
+(double)desiredHeight;
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 showCustomBorder:(BOOL)arg3 ;
-(unsigned long long)maxNumberOfTitleLines;
-(unsigned long long)maxNumberOfSubtitleLines;
-(id)imageURLString:(id)arg1 ;
-(id)attributedTitleStringForString:(id)arg1 ;
-(id)attributedSubtitleStringForString:(id)arg1 ;
-(unsigned long long)subtitleFontSize;
-(void)setCollectionItem:(id)arg1 inCollectionSection:(id)arg2 ;
-(void)layoutSubviews;
-(id)titleColor;
-(double)horizontalPadding;
-(double)imageBorderWidth;
-(double)verticalPadding;
-(unsigned long long)titleFontSize;
-(unsigned long long)iconSize;
-(id)subtitleColor;
@end
