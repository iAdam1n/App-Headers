/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSURL, WAMessage, NSNumber;

@interface WAGIFAsset : NSObject {

	BOOL _isfullPreviewable;
	NSURL* _previewURL;
	NSURL* _fullGIFURL;
	NSURL* _fullVideoURL;
	NSURL* _thumbnailURL;
	WAMessage* _originalMessage;
	double _widthRatio;
	NSNumber* _provider;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSURL * previewURL;                  //@synthesize previewURL=_previewURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullGIFURL;                  //@synthesize fullGIFURL=_fullGIFURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullVideoURL;                //@synthesize fullVideoURL=_fullVideoURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbnailURL;                //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,readonly) WAMessage * originalMessage;              //@synthesize originalMessage=_originalMessage - In the implementation block
@property (nonatomic,readonly) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isfullPreviewable;                   //@synthesize isfullPreviewable=_isfullPreviewable - In the implementation block
@property (assign,nonatomic) double widthRatio;                          //@synthesize widthRatio=_widthRatio - In the implementation block
@property (nonatomic,readonly) NSNumber * provider;                      //@synthesize provider=_provider - In the implementation block
+(id)preferredPreviewStringForSize:(CGSize)arg1 ;
+(id)smallPathForPath:(id)arg1 ;
+(id)stillPathForPath:(id)arg1 ;
+(id)notPreferredPreviewStringForSize:(CGSize)arg1 ;
+(CGSize)sizeFromGIPHYDictionary:(id)arg1 ;
+(id)previewURLFromGIPHYDictionary:(id)arg1 size:(CGSize)arg2 ;
+(id)smallPreviewURLFromGIPHYDictionary:(id)arg1 size:(CGSize)arg2 ;
+(id)thumbnailPreviewURLFromGIPHYDictionary:(id)arg1 size:(CGSize)arg2 ;
-(NSURL *)fullVideoURL;
-(NSURL *)fullGIFURL;
-(id)initWithSize:(CGSize)arg1 previewURL:(id)arg2 thumbnailURL:(id)arg3 fullVideoURL:(id)arg4 provider:(id)arg5 fullPreviewable:(BOOL)arg6 fullGIFURL:(id)arg7 widthRatio:(double)arg8 ;
-(id)initWithTenorJSON:(id)arg1 ;
-(id)initWithGIPHYJSON:(id)arg1 ;
-(BOOL)isfullPreviewable;
-(double)widthRatio;
-(void)setWidthRatio:(double)arg1 ;
-(CGSize)size;
-(NSNumber *)provider;
-(NSURL *)thumbnailURL;
-(WAMessage *)originalMessage;
-(NSURL *)previewURL;
-(id)initWithMessage:(id)arg1 ;
@end
