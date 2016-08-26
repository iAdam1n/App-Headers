/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVAudioMix;


@protocol FNFAVPlayerItem <NSObject>
@property (nonatomic,readonly) long long status; 
@property (nonatomic,copy,readonly) NSArray * loadedTimeRanges; 
@property (nonatomic,copy,readonly) id<FNFAVPlayerItemErrorLog> errorLog; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@required
-(void)requestTimeLoadedUpdate;
-(SCD_Struct_FB257*)duration;
-(id)asset;
-(long long)status;
-(AVAudioMix *)audioMix;
-(id<FNFAVPlayerItemErrorLog>)errorLog;
-(void)addOutput:(id)arg1;
-(NSArray *)loadedTimeRanges;
-(void)setAudioMix:(id)arg1;
-(id)accessLog;
-(SCD_Struct_FB257*)currentTime;
-(BOOL)isPlaybackLikelyToKeepUp;
-(BOOL)isPlaybackBufferFull;

@end
