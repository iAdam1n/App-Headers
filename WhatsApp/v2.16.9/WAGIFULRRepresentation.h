/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSURL, WAMessage;

@interface WAGIFULRRepresentation : NSObject {

	BOOL _isfullPreviewable;
	NSURL* _previewURL;
	NSURL* _fullGIFURL;
	NSURL* _fullVideoURL;
	NSURL* _thumbnailURL;
	WAMessage* _originalMessage;
	double _widthRatio;
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
+(id)preferredPreviewStringForAspectRatio:(CGSize)arg1 ;
+(id)notPreferredPreviewStringForAspectRatio:(CGSize)arg1 ;
+(id)smallPathForPath:(id)arg1 ;
+(id)stillPathForPath:(id)arg1 ;
+(id)fullItemURLFromDictionary:(id)arg1 forKey:(id)arg2 ;
+(CGSize)aspectRatioFromDictionary:(id)arg1 ;
+(id)smallPreviewURLFromDictionary:(id)arg1 aspectRatio:(CGSize)arg2 ;
+(id)thumbnailPreviewURLFromDictionary:(id)arg1 aspectRatio:(CGSize)arg2 ;
+(id)previewURLFromDictionary:(id)arg1 aspectRatio:(CGSize)arg2 ;
+(id)fullItemVideoURLFromDictionary:(id)arg1 ;
+(id)fullItemURLFromDictionary:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSURL *)fullGIFURL;
-(NSURL *)fullVideoURL;
-(BOOL)isfullPreviewable;
-(double)widthRatio;
-(void)setWidthRatio:(double)arg1 ;
-(CGSize)size;
-(NSURL *)previewURL;
-(NSURL *)thumbnailURL;
-(WAMessage *)originalMessage;
-(id)initWithMessage:(id)arg1 ;
@end

