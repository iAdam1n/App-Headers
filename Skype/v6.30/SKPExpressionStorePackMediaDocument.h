/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPExpressionPackMediaDocument.h>

@class NSNumber, NSString, NSArray;

@interface SKPExpressionStorePackMediaDocument : SKPExpressionPackMediaDocument {

	NSNumber* _numberOfEmoticons;
	NSNumber* _numberOfMojis;
	NSString* _offerId;
	unsigned long long _purchaseStatus;

}

@property (nonatomic,retain) NSNumber * numberOfEmoticons;                   //@synthesize numberOfEmoticons=_numberOfEmoticons - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfMojis;                       //@synthesize numberOfMojis=_numberOfMojis - In the implementation block
@property (nonatomic,copy,readonly) NSString * copyright; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,copy) NSString * offerId;                               //@synthesize offerId=_offerId - In the implementation block
@property (assign,nonatomic) unsigned long long purchaseStatus;              //@synthesize purchaseStatus=_purchaseStatus - In the implementation block
+(id)lazyLoadedPropertiesKeypaths;
+(id)keyPathsForValuesAffectingCopyright;
+(id)keyPathsForValuesAffectingNumberOfEmoticons;
+(id)keyPathsForValuesAffectingNumberOfMojis;
+(id)keyPathsForValuesAffectingKeywords;
-(id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id*)arg2 ;
-(BOOL)flushLazyProperty:(id)arg1 ;
-(void)skp_setValue:(id)arg1 forKey:(id)arg2 onMainThread:(BOOL)arg3 ;
-(NSNumber *)numberOfEmoticons;
-(NSNumber *)numberOfMojis;
-(unsigned long long)purchaseStatus;
-(NSString *)offerId;
-(void)setPurchaseStatus:(unsigned long long)arg1 ;
-(void)setNumberOfEmoticons:(NSNumber *)arg1 ;
-(id)fetchOperationForNumberOfExpressionsWithType:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setNumberOfMojis:(NSNumber *)arg1 ;
-(id)stringArrayMetaPropertyNames;
-(id)stringMetaPropertyNames;
-(void)setOfferId:(NSString *)arg1 ;
-(NSString *)copyright;
-(NSArray *)keywords;
@end
