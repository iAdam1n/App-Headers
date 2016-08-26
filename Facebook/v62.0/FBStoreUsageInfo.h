/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface FBStoreUsageInfo : NSObject {

	NSNumber* _databaseSize;
	NSNumber* _freeSize;
	NSNumber* _extendedSize;

}

@property (nonatomic,readonly) NSNumber * databaseSize;              //@synthesize databaseSize=_databaseSize - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSize;                  //@synthesize freeSize=_freeSize - In the implementation block
@property (nonatomic,readonly) NSNumber * extendedSize;              //@synthesize extendedSize=_extendedSize - In the implementation block
+(id)storeUsageInfoWithDatabaseURL:(id)arg1 extendedSize:(id)arg2 ;
+(id)storeUsageInfoWithDatabaseURL:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 extendedSize:(id)arg2 ;
-(NSNumber *)freeSize;
-(NSNumber *)extendedSize;
-(id)debugDescription;
-(NSNumber *)databaseSize;
@end
