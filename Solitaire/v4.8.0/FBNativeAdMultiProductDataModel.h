/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FBAdDataModel.h>

@class NSDictionary, NSString, FBAdImage, NSURL;

@interface FBNativeAdMultiProductDataModel : FBAdDataModel {

	NSDictionary* _metadata;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _callToAction;
	FBAdImage* _image;
	NSURL* _commandURL;
	NSURL* _impressionReportURL;
	NSURL* _clickReportURL;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToAction;                  //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) FBAdImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSURL * commandURL;                       //@synthesize commandURL=_commandURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * impressionReportURL;              //@synthesize impressionReportURL=_impressionReportURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * clickReportURL;                   //@synthesize clickReportURL=_clickReportURL - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(NSString *)callToAction;
-(NSURL *)impressionReportURL;
-(NSURL *)commandURL;
-(NSURL *)clickReportURL;
-(id)init;
-(BOOL)isValid;
-(NSString *)title;
-(FBAdImage *)image;
-(NSString *)subtitle;
-(NSString *)body;
-(NSDictionary *)metadata;
-(id)initWithMetadata:(id)arg1 ;
@end

