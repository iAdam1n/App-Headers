/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, FBCreativeSpecInputCreativeSpecObjectStorySpecLinkData, FBCreativeSpecInputCreativeSpecObjectStorySpecVideoData;

@interface FBCreativeSpecInputCreativeSpecObjectStorySpec : FBGraphQLInput {

	NSString* _rawSpec;
	NSArray* _fieldsRetainedFromRawSpec;
	NSString* _pageId;
	NSString* _instagramActorId;
	FBCreativeSpecInputCreativeSpecObjectStorySpecLinkData* _linkData;
	FBCreativeSpecInputCreativeSpecObjectStorySpecVideoData* _videoData;

}

@property (nonatomic,copy) NSString * rawSpec;                                                               //@synthesize rawSpec=_rawSpec - In the implementation block
@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;                                              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                                                //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * instagramActorId;                                                      //@synthesize instagramActorId=_instagramActorId - In the implementation block
@property (nonatomic,copy) FBCreativeSpecInputCreativeSpecObjectStorySpecLinkData * linkData;                //@synthesize linkData=_linkData - In the implementation block
@property (nonatomic,copy) FBCreativeSpecInputCreativeSpecObjectStorySpecVideoData * videoData;              //@synthesize videoData=_videoData - In the implementation block
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSString *)instagramActorId;
-(void)setInstagramActorId:(NSString *)arg1 ;
-(NSString *)rawSpec;
-(void)setRawSpec:(NSString *)arg1 ;
-(FBCreativeSpecInputCreativeSpecObjectStorySpecLinkData *)linkData;
-(void)setLinkData:(FBCreativeSpecInputCreativeSpecObjectStorySpecLinkData *)arg1 ;
-(void)setVideoData:(FBCreativeSpecInputCreativeSpecObjectStorySpecVideoData *)arg1 ;
-(FBCreativeSpecInputCreativeSpecObjectStorySpecVideoData *)videoData;
@end
