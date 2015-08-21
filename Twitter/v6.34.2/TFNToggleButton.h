/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIImage;

@interface TFNToggleButton : UIButton {

	BOOL _on;
	UIImage* _offImage;
	UIImage* _onImage;
	UIImage* _highlightedOffImage;
	UIImage* _highlightedOnImage;

}

@property (nonatomic,retain) UIImage * offImage;                         //@synthesize offImage=_offImage - In the implementation block
@property (nonatomic,retain) UIImage * onImage;                          //@synthesize onImage=_onImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedOffImage;              //@synthesize highlightedOffImage=_highlightedOffImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedOnImage;               //@synthesize highlightedOnImage=_highlightedOnImage - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                        //@synthesize on=_on - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIImage * highlightedImage; 
-(void)_toggle;
-(UIImage *)highlightedOnImage;
-(UIImage *)highlightedOffImage;
-(void)setHighlightedOffImage:(UIImage *)arg1 ;
-(void)setHighlightedOnImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)awakeFromNib;
-(UIImage *)highlightedImage;
-(UIImage *)onImage;
-(void)setOnImage:(UIImage *)arg1 ;
-(UIImage *)offImage;
-(void)setOffImage:(UIImage *)arg1 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)prepareForInterfaceBuilder;
-(void)updateImages;
@end

