/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIView, UIImage;

@interface T1OnboardingAvatarChooserImageCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIView* _selectedOverlayView;

}

@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * selectedOverlayView;              //@synthesize selectedOverlayView=_selectedOverlayView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
-(void)setSelectedOverlayView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UIView *)selectedOverlayView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

