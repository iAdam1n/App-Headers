/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Twitter/T1PhotoGalleryCellAction.h>

@class UIImageView, UIView, UIImage, NSString;

@interface T1PhotoGalleryOpenAlbumPickerCell : UICollectionViewCell <T1PhotoGalleryCellAction> {

	unsigned long long _index;
	UIImageView* _posterImageView;
	UIView* _overlayView;

}

@property (nonatomic,copy) UIImage * posterImage; 
@property (nonatomic,retain) UIImageView * posterImageView;              //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                       //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long index;                   //@synthesize index=_index - In the implementation block
-(UIImageView *)posterImageView;
-(void)setPosterImageView:(UIImageView *)arg1 ;
-(void)setPosterImage:(UIImage *)arg1 ;
-(UIView *)overlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)type;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(UIImage *)posterImage;
-(void)setOverlayView:(UIView *)arg1 ;
@end

