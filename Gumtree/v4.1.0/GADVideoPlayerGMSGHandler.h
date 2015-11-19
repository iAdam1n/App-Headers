/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADGMSGHandler.h>

@class GADAdViewDelegate;

@interface GADVideoPlayerGMSGHandler : GADGMSGHandler {

	GADAdViewDelegate* _adViewDelegate;

}

@property (assign,nonatomic,__weak) GADAdViewDelegate * adViewDelegate;              //@synthesize adViewDelegate=_adViewDelegate - In the implementation block
+(id)actionBlockDictionary;
+(id)subActionBlockDictionary;
-(void)setAdViewDelegate:(GADAdViewDelegate *)arg1 ;
-(GADAdViewDelegate *)adViewDelegate;
-(void)didReceiveVideoAction:(id)arg1 ;
-(void)didReceiveNewVideoAction:(id)arg1 ;
-(void)didReceivePositionVideoAction:(id)arg1 ;
-(void)didReceiveSetVideoSourceAction:(id)arg1 ;
-(void)didReceiveLoadVideoAction:(id)arg1 ;
-(void)didReceivePlayVideoAction:(id)arg1 ;
-(void)didReceivePauseVideoAction:(id)arg1 ;
-(void)didReceiveSetVolumeAction:(id)arg1 ;
-(void)didReceiveMutedVideoAction:(id)arg1 ;
-(void)didReceiveSeekToCurrentTimeAction:(id)arg1 ;
-(void)didReceiveHideVideoAction:(id)arg1 ;
-(void)didReceiveShowVideoAction:(id)arg1 ;
@end
