/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoAssetExporter.h>

@protocol FBVideoAssetExporter, FBErrorSimulationProtocol;
@class NSURL, NSString;

@interface FBVideoAssetExporterWrapper : NSObject <FBVideoAssetExporter> {

	id<FBVideoAssetExporter> _videoAssetExporter;
	NSURL* _outputURL;
	NSURL* _assetURL;
	id<FBErrorSimulationProtocol> _errorSimulation;
	SCD_Struct_FB420 _config;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long estimatedOutputFileLength; 
@property (nonatomic,readonly) SCD_Struct_FB242 outputDuration; 
-(SCD_Struct_FB242)outputDuration;
-(id)initWithAssetURL:(id)arg1 outputURL:(id)arg2 config:(SCD_Struct_FB421)arg3 errorSimulation:(id)arg4 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)exportAsynchronouslyWithProgress:(/*^block*/id)arg1 segmentCompletion:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelExportWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_newVideoAssetExporter;
-(long long)estimatedOutputFileLength;
-(void)cleanUp;
@end

