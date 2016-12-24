/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FBNetworkImageView, UILabel, UIImageView, FBPageNewLikeItem, FBImageDownloader;

@interface FBPageNewLikesGridCell : UICollectionViewCell {

	FBNetworkImageView* _profileImageView;
	UILabel* _nameLabel;
	UIImageView* _profileShadowView;
	FBPageNewLikeItem* _person;
	FBImageDownloader* _imageDownloader;

}

@property (nonatomic,retain) FBPageNewLikeItem * person;                       //@synthesize person=_person - In the implementation block
@property (nonatomic,retain) FBImageDownloader * imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
-(FBImageDownloader *)imageDownloader;
-(void)setImageDownloader:(FBImageDownloader *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPerson:(FBPageNewLikeItem *)arg1 ;
-(FBPageNewLikeItem *)person;
@end
