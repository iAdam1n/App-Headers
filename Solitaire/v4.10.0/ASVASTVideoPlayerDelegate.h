/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ASVASTVideoPlayerDelegate <NSObject>
@property (nonatomic,copy) NSString * closeOffset; 
@optional
-(void)VASTVideoPlayerSizeChanged:(id)arg1;

@required
-(void)setCloseOffset:(id)arg1;
-(NSString *)closeOffset;
-(void)AVPlayerCreated:(id)arg1;
-(BOOL)shouldShowAd;
-(void)VASTVideoPlayerVideoIsReady:(id)arg1;
-(void)VASTVideoPlayerFailedToLoad:(id)arg1 withErrorCode:(long long)arg2;
-(void)VASTVideoPlayerAdCompleted:(id)arg1;
-(void)VASTVideoPlayer:(id)arg1 wasClicked:(id)arg2;
-(void)VASTVideoPlayerWillRewardVC:(id)arg1;
-(void)VASTVideoPlayer:(id)arg1 willShowSkip:(BOOL)arg2;
-(void)VASTVideoPlayer:(id)arg1 didFireAdvertiserEventWithMessage:(id)arg2;
-(id)VASTVideoPlayerContainingView:(id)arg1;
-(void)cancel;

@end
