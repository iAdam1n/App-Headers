/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
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
-(id)initWithWebPageAttachment:(id)arg1 thumbnailSignal:(id)arg2 ;
-(int)_controlsType;
-(void)_onPageReady;
-(void)_notifyOfCallbackURL:(id)arg1 ;
-(id)_embedHTML;
-(void)_didBeginPlayback;
-(void)playVideo;
-(void)pauseVideo:(BOOL)arg1 ;
-(id)_baseURL;
@end
