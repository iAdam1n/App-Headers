/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAVCardSharingUnit.h>

@class UIImage;

@interface WAVCardProfilePhotoSharingUnit : WAVCardSharingUnit {

	UIImage* _image;
	long long _maxWidthInPixels;

}

@property (nonatomic,readonly) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long maxWidthInPixels;              //@synthesize maxWidthInPixels=_maxWidthInPixels - In the implementation block
-(id)initWithMergedContact:(id)arg1 index:(unsigned long long)arg2 ;
-(id)stringForVCard;
-(long long)maxWidthInPixels;
-(void)setMaxWidthInPixels:(long long)arg1 ;
-(UIImage *)image;
@end
