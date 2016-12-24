/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSURL, NSArray;

@interface FBMagicStoryMemoizedCollectionIndexData : FBValueObject <NSCopying, NSCoding> {

	NSURL* _latestAssetUrl;
	NSArray* _originalCollectionDataArray;
	NSArray* _classifiedCollectionDataArray;

}

@property (nonatomic,copy,readonly) NSURL * latestAssetUrl;                               //@synthesize latestAssetUrl=_latestAssetUrl - In the implementation block
@property (nonatomic,copy,readonly) NSArray * originalCollectionDataArray;                //@synthesize originalCollectionDataArray=_originalCollectionDataArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classifiedCollectionDataArray;              //@synthesize classifiedCollectionDataArray=_classifiedCollectionDataArray - In the implementation block
-(NSArray *)classifiedCollectionDataArray;
-(NSArray *)originalCollectionDataArray;
-(NSURL *)latestAssetUrl;
-(id)initWithLatestAssetUrl:(id)arg1 originalCollectionDataArray:(id)arg2 classifiedCollectionDataArray:(id)arg3 ;
@end
