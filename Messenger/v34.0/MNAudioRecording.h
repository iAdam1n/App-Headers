/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSURL, NSString;


@protocol MNAudioRecording <NSObject>
@property (assign,getter=isMeteringEnabled,nonatomic) BOOL meteringEnabled; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) id<MNAudioRecordingDelegate> delegate; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSString * fileMimeType; 
@required
-(NSString *)fileMimeType;
-(BOOL)isRecording;
-(BOOL)isMeteringEnabled;
-(BOOL)prepareToRecord;
-(void)setDelegate:(id)arg1;
-(id<MNAudioRecordingDelegate>)delegate;
-(NSURL *)url;
-(void)stop;
-(void)setMeteringEnabled:(BOOL)arg1;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1;
-(BOOL)record;
-(id)initWithURL:(id)arg1 error:(id*)arg2;
-(NSString *)fileExtension;
-(double)currentTime;

@end

