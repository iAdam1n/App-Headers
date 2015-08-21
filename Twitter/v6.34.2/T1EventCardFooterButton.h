/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIButton.h>

@class TFNTwitterEvent, NSString, UIImage, UILabel, UIImageView;

@interface T1EventCardFooterButton : UIButton {

	TFNTwitterEvent* _event;
	NSString* _text;
	UIImage* _image;
	UILabel* _footerLabel;
	UIImageView* _imageIconView;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) TFNTwitterEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                       //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageIconView;                 //@synthesize imageIconView=_imageIconView - In the implementation block
+(id)_footerFont;
-(UIImageView *)imageIconView;
-(void)setImageIconView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_update;
-(void)setEvent:(TFNTwitterEvent *)arg1 ;
-(TFNTwitterEvent *)event;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
@end

