/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface FBMLFaceRecognitionCache : NSObject <NSCoding> {

	NSDictionary* _recognitionResultSetByAssetIdentifier;
	NSDictionary* _uuidSetByAssetIdentifier;

}

@property (nonatomic,copy,readonly) NSDictionary * recognitionResultSetByAssetIdentifier;              //@synthesize recognitionResultSetByAssetIdentifier=_recognitionResultSetByAssetIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * uuidSetByAssetIdentifier;                           //@synthesize uuidSetByAssetIdentifier=_uuidSetByAssetIdentifier - In the implementation block
+(id)cacheFromExistingCache:(id)arg1 mergingRecognitionResultSetByAssetIdentifier:(id)arg2 ;
-(NSDictionary *)uuidSetByAssetIdentifier;
-(id)initWithRecognitionResultSetByAssetIdentifier:(id)arg1 ;
-(NSDictionary *)recognitionResultSetByAssetIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
