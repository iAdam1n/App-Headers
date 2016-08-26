/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGEmbedPlayerView.h>

@class NSString;

@interface TGEmbedInstagramPlayerView : TGEmbedPlayerView {

	NSString* _url;
	BOOL _playing;
	BOOL _started;

}
+(BOOL)_supportsWebPage:(id)arg1 ;
-(void)playVideo;
-(id)initWithWebPageAttachment:(id)arg1 thumbnailSignal:(id)arg2 ;
-(int)_controlsType;
-(void)_onPageReady;
-(void)_notifyOfCallbackURL:(id)arg1 ;
-(id)_embedHTML;
-(id)_baseURL;
-(void)_didBeginPlayback;
-(void)pauseVideo:(BOOL)arg1 ;
@end
