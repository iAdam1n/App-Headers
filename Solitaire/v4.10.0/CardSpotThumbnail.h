/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface CardSpotThumbnail : UIView {

	UIImageView* imageView;
	UILabel* label;

}

@property (retain) NSString * labelText; 
@property (retain) UIImage * image; 
-(void)layoutUI;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
@end
