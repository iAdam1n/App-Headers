/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAMultiSendMediaItem.h>
#import <WhatsApp/WAGIFTranscoderProgressDelegate.h>

@class UIImage, WAGIFTranscoder, NSURL, NSURLSessionDataTask, NSData, NSString;

@interface WAMultiSendPlaceholder : WAMultiSendMediaItem <WAGIFTranscoderProgressDelegate> {

	UIImage* _placeholderImage;
	WAGIFTranscoder* _transcoder;
	NSURL* _downloadedContentURL;
	NSURLSessionDataTask* _downloadTask;
	CGSize _aspectRatio;
	BOOL _failedToDownload;
	BOOL _failedToTranscode;
	/*^block*/id _exportCompletionHandler;
	/*^block*/id _internalExportProgressHandler;
	BOOL _isSavedToCameraRoll;
	BOOL _shouldSaveToCameraRollOnCompletion;
	BOOL _cancled;
	NSURL* _videoPreviewURL;
	NSData* _GIFData;
	unsigned long long _type;

}

@property (nonatomic,readonly) NSURL * videoPreviewURL;                     //@synthesize videoPreviewURL=_videoPreviewURL - In the implementation block
@property (getter=IFData,nonatomic,readonly) NSData * GIFData;              //@synthesize GIFData=_GIFData - In the implementation block
@property (nonatomic,readonly) CGSize aspectRatio; 
@property (nonatomic,readonly) float transcodeProgress; 
@property (nonatomic,readonly) BOOL exportFailed; 
@property (nonatomic,readonly) BOOL showIndefiniteProgress; 
@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUndownloadedURL:(id)arg1 contentURL:(id)arg2 previewURL:(id)arg3 thumbnail:(id)arg4 aspectRatio:(CGSize)arg5 ;
-(BOOL)isGIF;
-(id)originalImageForPreview;
-(NSData *)GIFData;
-(void)setNeedsExport;
-(void)cancelCurrentExport;
-(void)reallyExportWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)exportFailed;
-(float)transcodeProgress;
-(NSURL *)videoPreviewURL;
-(BOOL)showIndefiniteProgress;
-(BOOL)isExportedPlacehodler;
-(void)saveToCameraRollAsynchronouslyIfNeeded;
-(float)exportProgress;
-(id)initWithGIFData:(id)arg1 assetIdentifier:(id)arg2 automaticGIFExport:(BOOL)arg3 ;
-(void)setIsGIF;
-(void)GIFTranscoderDidFailTranscode:(id)arg1 ;
-(void)GIFTranscoder:(id)arg1 didCompletedWithFilePath:(id)arg2 ;
-(void)GIFTranscoderDidUpdateProgress:(id)arg1 ;
-(void)notifyFail;
-(void)transcodeGIFData;
-(void)notifySuccess;
-(void)dealloc;
-(unsigned long long)type;
-(BOOL)isEditable;
-(BOOL)isPlaceholder;
-(CGSize)aspectRatio;
@end

