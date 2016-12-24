/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class ContentImageView, NSString;

@interface CommentImagesViewCell : UICollectionViewCell {

	BOOL _imageFailedToLoad;
	ContentImageView* _imageView;
	ContentImageView* _placeholderImageView;
	NSString* _contentUrl;

}

@property (nonatomic,retain) ContentImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) ContentImageView * placeholderImageView;              //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,copy) NSString * contentUrl;                                  //@synthesize contentUrl=_contentUrl - In the implementation block
@property (assign,nonatomic) BOOL imageFailedToLoad;                               //@synthesize imageFailedToLoad=_imageFailedToLoad - In the implementation block
-(void)setContentUrl:(NSString *)arg1 ;
-(ContentImageView *)placeholderImageView;
-(BOOL)imageFailedToLoad;
-(NSString *)contentUrl;
-(void)setImageFailedToLoad:(BOOL)arg1 ;
-(void)setPlaceholderImageView:(ContentImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(ContentImageView *)imageView;
-(void)setImageView:(ContentImageView *)arg1 ;
@end
