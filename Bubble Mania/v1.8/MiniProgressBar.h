/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImageView, UIImage;

@interface MiniProgressBar : UIImageView {

	float progress;
	UIImageView* progressBar;
	UIImage* backgroundImage;
	UIImage* barImage;
	UIImage* fullbarImage;

}

@property (assign,nonatomic) float progress; 
-(void)initImages;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)setup;
@end

