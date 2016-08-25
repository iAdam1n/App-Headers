/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ImgurUploadRecord : NSObject {

	NSString* _smallThumbnailUrl;
	NSString* _originalImageUrl;
	NSString* _deleteHash;

}

@property (copy) NSString * smallThumbnailUrl;              //@synthesize smallThumbnailUrl=_smallThumbnailUrl - In the implementation block
@property (copy) NSString * originalImageUrl;               //@synthesize originalImageUrl=_originalImageUrl - In the implementation block
@property (copy) NSString * deleteHash;                     //@synthesize deleteHash=_deleteHash - In the implementation block
+(id)originalImageUrlFromImgurResponseDictionary:(id)arg1 ;
+(void)storeUploadRecordWithImgurResponseDictionary:(id)arg1 ;
+(id)imgurUploadRecords;
+(void)removeStoredUploadRecordForRecord:(id)arg1 ;
-(NSString *)originalImageUrl;
-(NSString *)deleteHash;
-(void)setSmallThumbnailUrl:(NSString *)arg1 ;
-(void)setOriginalImageUrl:(NSString *)arg1 ;
-(void)setDeleteHash:(NSString *)arg1 ;
-(id)initWithImgurResponseDictionary:(id)arg1 ;
-(NSString *)smallThumbnailUrl;
@end

