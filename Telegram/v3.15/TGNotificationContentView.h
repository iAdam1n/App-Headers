/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class TGLetteredAvatarView, TGNotificationPreviewView;

@interface TGNotificationContentView : UIView {

	TGLetteredAvatarView* _avatarView;
	TGNotificationPreviewView* _previewView;
	/*^block*/id _requestMedia;
	/*^block*/id _cancelMedia;
	/*^block*/id _playMedia;
	/*^block*/id _isMediaAvailable;
	/*^block*/id _mediaContext;

}

@property (nonatomic,readonly) TGNotificationPreviewView * previewView;              //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) id requestMedia;                                          //@synthesize requestMedia=_requestMedia - In the implementation block
@property (nonatomic,copy) id cancelMedia;                                           //@synthesize cancelMedia=_cancelMedia - In the implementation block
@property (nonatomic,copy) id playMedia;                                             //@synthesize playMedia=_playMedia - In the implementation block
@property (nonatomic,copy) id isMediaAvailable;                                      //@synthesize isMediaAvailable=_isMediaAvailable - In the implementation block
@property (nonatomic,copy) id mediaContext;                                          //@synthesize mediaContext=_mediaContext - In the implementation block
-(void)configureWithMessage:(id)arg1 conversation:(id)arg2 peers:(id)arg3 ;
-(id)cancelMedia;
-(id)playMedia;
-(id)requestMedia;
-(void)setRequestMedia:(id)arg1 ;
-(void)setCancelMedia:(id)arg1 ;
-(void)setPlayMedia:(id)arg1 ;
-(void)setIsMediaAvailable:(id)arg1 ;
-(void)setMediaContext:(id)arg1 ;
-(id)mediaContext;
-(id)isMediaAvailable;
-(void)updatePreviewWithMessage:(id)arg1 conversation:(id)arg2 peers:(id)arg3 ;
-(void)updateAvatarWithMessage:(id)arg1 conversation:(id)arg2 peers:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(TGNotificationPreviewView *)previewView;
@end
