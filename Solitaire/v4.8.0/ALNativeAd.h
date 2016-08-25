/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/ALLoadableObject.h>

@class NSNumber, NSString, NSURL, ALSdk;

@interface ALNativeAd : NSObject <ALLoadableObject> {

	NSNumber* _adIdNumber;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _captionText;
	NSString* _ctaText;
	NSURL* _iconURL;
	NSURL* _imageURL;
	NSNumber* _starRating;
	NSURL* _videoURL;
	NSURL* _impressionTrackingURL;
	NSURL* _clickURL;
	NSURL* _videoStartTrackingURL;
	ALSdk* _parentSdk;
	NSURL* _sourceIconURL;
	NSURL* _sourceImageURL;
	NSURL* _sourceVideoURL;
	NSURL* _videoEndTrackingURL;
	NSString* _clCode;

}

@property (nonatomic,retain) NSNumber * adIdNumber;                            //@synthesize adIdNumber=_adIdNumber - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                         //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * captionText;                             //@synthesize captionText=_captionText - In the implementation block
@property (nonatomic,copy) NSString * ctaText;                                 //@synthesize ctaText=_ctaText - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                                  //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSNumber * starRating;                            //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) NSURL * videoURL;                                 //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,retain) NSURL * impressionTrackingURL;                    //@synthesize impressionTrackingURL=_impressionTrackingURL - In the implementation block
@property (nonatomic,retain) NSURL * clickURL;                                 //@synthesize clickURL=_clickURL - In the implementation block
@property (nonatomic,retain) NSURL * videoStartTrackingURL;                    //@synthesize videoStartTrackingURL=_videoStartTrackingURL - In the implementation block
@property (getter=isImagePrecached,readonly) BOOL imagePrecached; 
@property (getter=isVideoPrecached,readonly) BOOL videoPrecached; 
@property (assign,nonatomic,__weak) ALSdk * parentSdk;                         //@synthesize parentSdk=_parentSdk - In the implementation block
@property (nonatomic,retain) NSURL * sourceIconURL;                            //@synthesize sourceIconURL=_sourceIconURL - In the implementation block
@property (nonatomic,retain) NSURL * sourceImageURL;                           //@synthesize sourceImageURL=_sourceImageURL - In the implementation block
@property (nonatomic,retain) NSURL * sourceVideoURL;                           //@synthesize sourceVideoURL=_sourceVideoURL - In the implementation block
@property (nonatomic,retain) NSURL * videoEndTrackingURL;                      //@synthesize videoEndTrackingURL=_videoEndTrackingURL - In the implementation block
@property (nonatomic,copy) NSString * clCode;                                  //@synthesize clCode=_clCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sizeNative;
+(id)specNative;
+(id)typeNative;
-(void)setClickURL:(NSURL *)arg1 ;
-(NSURL *)clickURL;
-(void)setImpressionTrackingURL:(NSURL *)arg1 ;
-(NSURL *)impressionTrackingURL;
-(NSNumber *)adIdNumber;
-(NSString *)ctaText;
-(void)setCtaText:(NSString *)arg1 ;
-(NSURL *)sourceIconURL;
-(void)setSourceIconURL:(NSURL *)arg1 ;
-(NSURL *)sourceImageURL;
-(void)setSourceImageURL:(NSURL *)arg1 ;
-(NSURL *)sourceVideoURL;
-(void)setSourceVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoStartTrackingURL;
-(void)setVideoStartTrackingURL:(NSURL *)arg1 ;
-(NSString *)clCode;
-(void)setClCode:(NSString *)arg1 ;
-(NSURL *)videoEndTrackingURL;
-(ALSdk *)parentSdk;
-(id)videoEndTrackingURL:(unsigned long long)arg1 firstPlay:(BOOL)arg2 ;
-(BOOL)isImagePrecached;
-(BOOL)isVideoPrecached;
-(void)launchClickTarget;
-(void)setParentSdk:(ALSdk *)arg1 ;
-(void)setVideoEndTrackingURL:(NSURL *)arg1 ;
-(void)setAdIdNumber:(NSNumber *)arg1 ;
-(NSURL *)iconURL;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setStarRating:(NSNumber *)arg1 ;
-(NSNumber *)starRating;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(NSString *)captionText;
-(void)setCaptionText:(NSString *)arg1 ;
-(void)setIconURL:(NSURL *)arg1 ;
@end

