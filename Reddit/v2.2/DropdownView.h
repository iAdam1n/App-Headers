/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/BaseView.h>

@class BaseLabel, BaseImageView;

@interface DropdownView : BaseView {

	BaseLabel* _label;
	BaseImageView* _imageView;

}

@property (nonatomic,retain) BaseLabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) BaseImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BaseImageView *)imageView;
-(BaseLabel *)label;
-(void)setLabel:(BaseLabel *)arg1 ;
-(void)setImageView:(BaseImageView *)arg1 ;
@end
