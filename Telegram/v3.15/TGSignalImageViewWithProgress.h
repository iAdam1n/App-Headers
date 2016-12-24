/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGSignalImageView.h>

@class TGMessageImageViewOverlayView;

@interface TGSignalImageViewWithProgress : TGSignalImageView {

	TGMessageImageViewOverlayView* _overlayView;
	double _progress;
	BOOL _manualProgress;

}

@property (assign,nonatomic) BOOL manualProgress;              //@synthesize manualProgress=_manualProgress - In the implementation block
-(void)setDownload;
-(void)setNone;
-(void)setPlay;
-(BOOL)manualProgress;
-(void)setManualProgress:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(double)progress;
-(void)_updateProgress:(float)arg1 ;
@end
