/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsClassic/AngryBirdsClassic-Structs.h>
#import <AngryBirdsClassic/GADRequest.h>

@class NSString, NSArray, NSDictionary;

@interface DFPRequest : GADRequest {

	NSString* _publisherProvidedID;
	NSArray* _categoryExclusions;

}

@property (nonatomic,copy) NSString * publisherProvidedID;              //@synthesize publisherProvidedID=_publisherProvidedID - In the implementation block
@property (nonatomic,copy) NSArray * categoryExclusions;                //@synthesize categoryExclusions=_categoryExclusions - In the implementation block
@property (nonatomic,copy) NSDictionary * customTargeting; 
+(void)updateCorrelator;
-(id)threadSafeParameters;
-(void)setPublisherProvidedID:(NSString *)arg1 ;
-(void)setCategoryExclusions:(NSArray *)arg1 ;
-(NSString *)publisherProvidedID;
-(NSArray *)categoryExclusions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end
