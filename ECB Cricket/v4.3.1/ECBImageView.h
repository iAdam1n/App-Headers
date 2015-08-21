/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface ECBImageView : UIView {

	UIImage* _image;
	unsigned long long _gravity;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long gravity;              //@synthesize gravity=_gravity - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(unsigned long long)gravity;
-(void)setGravity:(unsigned long long)arg1 ;
@end

