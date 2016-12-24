/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseControl.h>

@class UIImage, NSString, BaseImageView, BaseLabel;

@interface PageSegmentItem : BaseControl {

	UIImage* _image;
	UIImage* _selectedImage;
	NSString* _text;
	long long _badgeValue;
	BaseImageView* _imageView;
	BaseLabel* _label;
	BaseLabel* _badgeLabel;

}

@property (nonatomic,retain) BaseImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) BaseLabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) BaseLabel * badgeLabel;                 //@synthesize badgeLabel=_badgeLabel - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,copy) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long badgeValue;                   //@synthesize badgeValue=_badgeValue - In the implementation block
+(double)preferredHeight;
-(BaseLabel *)badgeLabel;
-(void)setBadgeLabel:(BaseLabel *)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)selectedImage;
-(void)setBadgeValue:(long long)arg1 ;
-(BaseImageView *)imageView;
-(long long)badgeValue;
-(BaseLabel *)label;
-(void)setLabel:(BaseLabel *)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setImageView:(BaseImageView *)arg1 ;
-(double)imageScale;
@end
