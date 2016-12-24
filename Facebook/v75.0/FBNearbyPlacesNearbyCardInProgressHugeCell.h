/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, FBShimmeringView, NSArray;

@interface FBNearbyPlacesNearbyCardInProgressHugeCell : UITableViewCell {

	UIView* _actionBarTopBorder;
	UIView* _bottomBorder;
	UIView* _cellSpacer;
	UIImageView* _textLine1;
	UIImageView* _textLine2;
	FBShimmeringView* _shimmerView;
	NSArray* _actionBarSeperators;
	NSArray* _photos;

}

@property (nonatomic,copy) NSArray * actionBarSeperators;              //@synthesize actionBarSeperators=_actionBarSeperators - In the implementation block
@property (nonatomic,copy) NSArray * photos;                           //@synthesize photos=_photos - In the implementation block
-(NSArray *)actionBarSeperators;
-(void)setActionBarSeperators:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
@end
