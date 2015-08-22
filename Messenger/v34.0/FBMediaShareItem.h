/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString, FBAssetMetadata, NSDate;

@interface FBMediaShareItem : FBValueObject <NSCopying, NSCoding> {

	NSString* _assetID;
	NSString* _dataSourceID;
	unsigned long long _indexHint;
	FBAssetMetadata* _metadata;
	unsigned long long _mediaShareItemType;
	unsigned long long _quality;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSString * assetID;                            //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataSourceID;                       //@synthesize dataSourceID=_dataSourceID - In the implementation block
@property (nonatomic,readonly) unsigned long long indexHint;                       //@synthesize indexHint=_indexHint - In the implementation block
@property (nonatomic,copy,readonly) FBAssetMetadata * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaShareItemType;              //@synthesize mediaShareItemType=_mediaShareItemType - In the implementation block
@property (nonatomic,readonly) unsigned long long quality;                         //@synthesize quality=_quality - In the implementation block
@property (nonatomic,copy,readonly) NSDate * creationDate;                         //@synthesize creationDate=_creationDate - In the implementation block
-(NSString *)assetID;
-(unsigned long long)indexHint;
-(unsigned long long)mediaShareItemType;
-(id)initWithAssetID:(id)arg1 dataSourceID:(id)arg2 indexHint:(unsigned long long)arg3 metadata:(id)arg4 mediaShareItemType:(unsigned long long)arg5 quality:(unsigned long long)arg6 creationDate:(id)arg7 ;
-(NSString *)dataSourceID;
-(NSDate *)creationDate;
-(unsigned long long)quality;
-(FBAssetMetadata *)metadata;
@end
