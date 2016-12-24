/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAStatusCell.h>

@class NSTimer, UIImageView, CADisplayLink;

@interface WAStatusImageCell : WAStatusCell {

	NSTimer* _playingTimer;
	UIImageView* _imageView;
	CADisplayLink* _displayLink;
	double _timerStartTime;

}
-(void)layoutSubviewsInCell;
-(void)didChangeMessageAtStage:(long long)arg1 ;
-(void)onDisplayLinkDidFire:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)startTimer;
-(void)cancelTimer;
-(void)pause:(id)arg1 ;
-(void)setPresentationState:(long long)arg1 ;
@end
