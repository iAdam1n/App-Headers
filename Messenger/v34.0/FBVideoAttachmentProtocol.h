/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSURL, NSString, FBVideoAsset;


@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol,NSCoding>
@property (nonatomic,retain) NSURL * videoURL; 
@property (nonatomic,readonly) NSString * presetName; 
@property (nonatomic,readonly) NSString * outputFileType; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB242 duration; 
@property (nonatomic,readonly) double bitrateKbps; 
@property (nonatomic,readonly) BOOL requiresProcessing; 
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (assign,nonatomic) unsigned long long indexHint; 
@property (nonatomic,readonly) FBVideoAsset * videoAsset; 
@property (nonatomic,readonly) unsigned long long quality; 
@required
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 customTranscoding:(BOOL)arg4 videoExportConfig:(id)arg5 errorSimulation:(id)arg6 timeRange:(SCD_Struct_FB419)arg7;
-(void)exportVideoDataWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 baseURL:(id)arg3 customTranscoding:(BOOL)arg4 videoExportConfig:(id)arg5 errorSimulation:(id)arg6;
-(void)removeTemporaryExportFile;
-(void)cancelExportVideoDataWithCompletionBlock:(/*^block*/id)arg1;
-(double)bitrateKbps;
-(BOOL)requiresProcessing;
-(unsigned long long)indexHint;
-(void)setIndexHint:(unsigned long long)arg1;
-(NSString *)outputFileType;
-(long long)estimatedOutputFileLength;
-(NSString *)dataSourceID;
-(NSURL *)videoURL;
-(void)setVideoURL:(id)arg1;
-(SCD_Struct_FB242)duration;
-(unsigned long long)quality;
-(FBVideoAsset *)videoAsset;
-(NSString *)presetName;

@end

