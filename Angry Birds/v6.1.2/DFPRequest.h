/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADRequest.h>

@class NSString, NSArray, NSDictionary;

@interface DFPRequest : GADRequest {

	NSString* _publisherProvidedID;
	NSArray* _categoryExclusions;
	NSDictionary* _customTargeting;

}

@property (nonatomic,copy) NSString * publisherProvidedID;              //@synthesize publisherProvidedID=_publisherProvidedID - In the implementation block
@property (nonatomic,copy) NSArray * categoryExclusions;                //@synthesize categoryExclusions=_categoryExclusions - In the implementation block
@property (nonatomic,copy) NSDictionary * customTargeting;              //@synthesize customTargeting=_customTargeting - In the implementation block
+(void)updateCorrelator;
-(void)setPublisherProvidedID:(NSString *)arg1 ;
-(void)setCategoryExclusions:(NSArray *)arg1 ;
-(void)setCustomTargeting:(NSDictionary *)arg1 ;
-(NSString *)publisherProvidedID;
-(NSArray *)categoryExclusions;
-(NSDictionary *)customTargeting;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
@end

