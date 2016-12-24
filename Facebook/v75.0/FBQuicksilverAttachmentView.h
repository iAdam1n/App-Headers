/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FNFAVPlayer, FNFAVPlayerLayer, FNFAVAsset;
@class CALayer, UILabel, UIView, UIImageView, CAShapeLayer, FBUserSession, NSString;

@interface FBQuicksilverAttachmentView : UIView {

	id<FNFAVPlayer> _player;
	CALayer*<FNFAVPlayerLayer> _playerLayer;
	id<FNFAVAsset> _asset;
	UILabel* _notAvaliableMessage;
	UIView* _darkTransparency;
	UIImageView* _gameGlyphView;
	CAShapeLayer* _gameGlyphCircle;
	FBUserSession* _session;
	NSString* _videoURL;
	UIView* _playNowView;
	BOOL _hadFullImpression;

}
-(void)setFullImpression:(BOOL)arg1 ;
-(void)setIsAvaliable:(BOOL)arg1 ;
-(void)createStart;
-(void)playVideoIfReady;
-(void)hitEndTime;
-(void)showPlayNow;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setSession:(id)arg1 ;
-(void)setVideoURL:(id)arg1 ;
@end
