/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSURL, UIImage, NSData;

@interface WAMediaPickerItem : NSObject {

	BOOL _needsDownload;
	BOOL _isVideo;
	BOOL _isGIF;
	BOOL _isLivePhoto;
	id _identifier;
	NSURL* _videoURL;
	UIImage* _image;
	NSData* _GIFData;
	NSURL* _fileURL;
	NSURL* _undownloadedFileURL;
	NSURL* _previewFileURL;
	id _info;
	CGSize _originalAspectRatio;

}

@property (nonatomic,retain) id identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                          //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (getter=IFData,nonatomic,copy) NSData * GIFData;              //@synthesize GIFData=_GIFData - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSURL * undownloadedFileURL;               //@synthesize undownloadedFileURL=_undownloadedFileURL - In the implementation block
@property (nonatomic,retain) NSURL * previewFileURL;                    //@synthesize previewFileURL=_previewFileURL - In the implementation block
@property (assign,nonatomic) CGSize originalAspectRatio;                //@synthesize originalAspectRatio=_originalAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL needsDownload;                        //@synthesize needsDownload=_needsDownload - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                              //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL isGIF;                                //@synthesize isGIF=_isGIF - In the implementation block
@property (assign,nonatomic) BOOL isLivePhoto;                          //@synthesize isLivePhoto=_isLivePhoto - In the implementation block
@property (nonatomic,retain) id info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) BOOL isFileFormatSupported; 
-(BOOL)isGIF;
-(NSData *)GIFData;
-(NSURL *)undownloadedFileURL;
-(NSURL *)previewFileURL;
-(CGSize)originalAspectRatio;
-(BOOL)isFileFormatSupported;
-(void)updateFileURL:(id)arg1 ;
-(void)setGIFData:(NSData *)arg1 ;
-(void)setUndownloadedFileURL:(NSURL *)arg1 ;
-(void)setPreviewFileURL:(NSURL *)arg1 ;
-(void)setOriginalAspectRatio:(CGSize)arg1 ;
-(void)setNeedsDownload:(BOOL)arg1 ;
-(void)setIsGIF:(BOOL)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)identifier;
-(UIImage *)image;
-(void)setIdentifier:(id)arg1 ;
-(id)info;
-(NSURL *)fileURL;
-(BOOL)isVideo;
-(void)setInfo:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setIsLivePhoto:(BOOL)arg1 ;
-(BOOL)isLivePhoto;
-(BOOL)needsDownload;
@end

