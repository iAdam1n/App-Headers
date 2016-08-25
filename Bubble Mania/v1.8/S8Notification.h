/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSString, UIFont, UIImage, UIColor, NSTimer, UILabel, UIImageView;

@interface S8Notification : UIView {

	id delegate;
	int type;
	CGRect notificationFrame;
	CGRect labelFrame;
	CGRect titleFrame;
	int width;
	int height;
	int xLabelOffset;
	int xPadding;
	int yLabelOffset;
	int yPadding;
	long long alignment;
	UIView* enclosingView;
	NSString* text;
	UIFont* textFont;
	long long duration;
	UIImage* bg;
	UIColor* textColor;
	NSTimer* hideTimer;
	UILabel* label;
	UIImage* image;
	UIImageView* imageView;

}

@property (assign,nonatomic) id<S8NotificationDelegate> delegate; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) long long duration; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * textFont; 
@property (nonatomic,retain) UIImage * bg; 
@property (nonatomic,retain) NSTimer * hideTimer; 
@property (nonatomic,retain) UILabel * label; 
@property (nonatomic,retain) UIImageView * imageView; 
+(CGSize)determineFrameSizeFromText:(id)arg1 ;
+(void)notifyWithMessage:(id)arg1 view:(id)arg2 ;
+(void)notifyWithMessage:(id)arg1 view:(id)arg2 type:(int)arg3 ;
+(void)notifyWithMessage:(id)arg1 view:(id)arg2 type:(int)arg3 duration:(long long)arg4 ;
+(void)notifyWithImage:(id)arg1 andTitle:(id)arg2 view:(id)arg3 ;
+(void)notifyWithMessage:(id)arg1 view:(id)arg2 thumbnail:(id)arg3 ;
-(id)initWithView:(id)arg1 andType:(int)arg2 andMessage:(id)arg3 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setupNotification;
-(void)showWithAnimation;
-(void)setHideTimer:(NSTimer *)arg1 ;
-(void)hideWithAnimation;
-(UIImage *)bg;
-(NSTimer *)hideTimer;
-(void)getNotificationStyle;
-(void)setBg:(UIImage *)arg1 ;
-(void)hide;
-(void)show;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<S8NotificationDelegate>)arg1 ;
-(void)dealloc;
-(id<S8NotificationDelegate>)delegate;
-(long long)duration;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setDuration:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(UIColor *)textColor;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)done;
-(UIFont *)textFont;
-(void)setImageView:(UIImageView *)arg1 ;
@end

