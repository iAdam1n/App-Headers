/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView, UILabel, UIImage;

@interface FBStorylinePhotosEditorViewCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _videoInfoBackgroundView;
	UIImageView* _videoIconView;
	UILabel* _videoLengthView;
	unsigned long long _type;
	double _videoLength;

}

@property (nonatomic,copy) UIImage * image; 
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double videoLength;                   //@synthesize videoLength=_videoLength - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(UIImage *)image;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setVideoLength:(double)arg1 ;
-(double)videoLength;
@end
