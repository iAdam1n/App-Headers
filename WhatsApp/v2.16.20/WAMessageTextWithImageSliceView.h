/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMessageContainerSliceView.h>

@class UIView, UIImageView, WAMessageTextWithImageSlice;

@interface WAMessageTextWithImageSliceView : WAMessageContainerSliceView {

	UIView* _containerView;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) WAMessageTextWithImageSlice * slice; 
@property (nonatomic,readonly) UIView * containerView;                           //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
+(BOOL)supportsPreviewing;
+(BOOL)isUserInteractionEnabled;
-(void)reloadSliceAfterChange:(unsigned long long)arg1 ;
-(void)fetchImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIView *)containerView;
-(UIImageView *)imageView;
@end
