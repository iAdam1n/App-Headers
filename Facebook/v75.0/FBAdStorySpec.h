/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, FBAdLinkData, FBAdVideoData;

@interface FBAdStorySpec : FBGraphQLInput {

	NSString* _rawSpec;
	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _pageId;
	NSString* _instagramActorId;
	FBAdLinkData* _linkData;
	FBAdVideoData* _videoData;

}

@property (nonatomic,copy) NSString * rawSpec;                               //@synthesize rawSpec=_rawSpec - In the implementation block
@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * instagramActorId;                      //@synthesize instagramActorId=_instagramActorId - In the implementation block
@property (nonatomic,copy) FBAdLinkData * linkData;                          //@synthesize linkData=_linkData - In the implementation block
@property (nonatomic,copy) FBAdVideoData * videoData;                        //@synthesize videoData=_videoData - In the implementation block
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)pageId;
-(NSString *)instagramActorId;
-(void)setInstagramActorId:(NSString *)arg1 ;
-(void)setLinkData:(FBAdLinkData *)arg1 ;
-(FBAdLinkData *)linkData;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSString *)rawSpec;
-(void)setRawSpec:(NSString *)arg1 ;
-(void)setVideoData:(FBAdVideoData *)arg1 ;
-(FBAdVideoData *)videoData;
@end
