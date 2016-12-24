/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSError;


@protocol FNFPlayerDisplayEngine <NSObject>
@property (copy) NSString * videoGravity; 
@property (retain) OpaqueCMTimebaseRef controlTimebase; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic,__weak) id<FNFPlayerDisplayEngineDelegate> playerLayerDelegate; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@required
-(void)invalidateRenderer:(id)arg1;
-(BOOL)allowRenderingWhileApplicationInactive;
-(id<FNFPlayerDisplayEngineDelegate>)playerLayerDelegate;
-(BOOL)flushDisplayReadySampleBuffers;
-(BOOL)flushIfError;
-(void)yieldDecompressedBuffer:(CVBufferRef)arg1 presentationTimeStamp:(SCD_Struct_FB25)arg2 presentationDuration:(SCD_Struct_FB25)arg3;
-(void)setPlayerLayerDelegate:(id)arg1;
-(void)invalidate;
-(void)flush;
-(void)resume;
-(long long)status;
-(void)setPreferredTransform:(CGAffineTransform)arg1;
-(void)setControlTimebase:(OpaqueCMTimebaseRef)arg1;
-(OpaqueCMTimebaseRef)controlTimebase;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(void)flushAndRemoveImage;
-(NSString *)videoGravity;
-(NSError *)error;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(id)arg1;
-(void)pauseDisplayLink;
-(CGAffineTransform)preferredTransform;
-(void)pause:(int)arg1;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setRenderer:(id)arg1;

@end
